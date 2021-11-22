#include <iostream>
#include <vector> 
using namespace std;


int f(string t) {
    vector<string> pr; 
    vector<string> sf; 






    for (int i =0;   i  < t.size() -1; i++ ) {
        pr.push_back(t.substr(0 ,  i+1 )); 
        

    }
    
    for (int i =0; i  < t.size() -  1;  i++) {
        sf.push_back(t.substr(t.size() - 1 -i, i  + 1));

    }
    for(int i =0;  i < pr.size(); i++) {
        cout  << "for pi[i] " << pr[i] << endl;
    }
    for (int  i= 0;  i < sf.size();  i ++ ) {
        cout << "for sf[i] " << sf[i] << endl;
    }
    for (int  i = t.size() -2;  i >= 0; i--) {
        if(pr[i] == sf[i]){
            cout <<"pr[i]  " << pr[i]  << endl;
            cout <<"sf[i]  " << sf[i] << endl;
            return pr[i].size();
        }
    }
    return 0;
}


int main() {



    string s;


    cin >> s; 
    
    int p[s.size()];
    for (int i =0;  i < s.size(); i++) {
        cout << "cout  " << s.substr(0 ,i + 1)  << endl;
        p[i] =  f(s.substr(0, i + 1));
        
     }
    for (int i =0; i < s.size();  i++) {
        cout << p[i]  <<" ";
    }
    
    return  0;
}
