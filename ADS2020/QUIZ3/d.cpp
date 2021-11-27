#include <iostream>
#include <vector> 
#include <string> 
using namespace std; 
vector<char > ups;
vector<int> pre(string s) {
    int n =  s.size(); 

    vector<int> p(n); 



    p[0] =0; 


    for(int   i = 1;  i < n; i++) {
        int j = p[i - 1];

        while(j  > 0  && s[i] != s[j]) {
            j = p[j - 1];
        }
        if(s[i] == s[j]) {
            j++; 
            p[i] =j;
            char you  =  s[i];
            ups.push_back(you);
        }
    }
    return p;
}
vector<int> pred(string s) {
    int n =  s.size(); 

    vector<int> p(n); 



    p[0] =0; 


    for(int   i = 1;  i < n; i++) {
        int j = p[i - 1];

        while(j  > 0  && s[i] != s[j]) {
            j = p[j - 1];
        }
        if(s[i] == s[j]) {
            j++; 
            p[i] =j;
            char you  =  s[i];
            ups.push_back(you);
        }
    }
    return p;
}

int main() {
   string a,c; 
   int b;
   cin >>  a  >> b >> c; 
   string key =  a + "#" + c; 
   string  keys =  a  +  c;
   int64_t cnt =0; 
   int len =  a.size();
   vector<int> old = pre(key);
   vector<int >older =  pre(keys); 
   //vector<anyvalue>  name vectors
 //  for(int i =0;  i  < ups.size();  i++ ) { 
   //    cout << ups[i] <<" ";
   //}
   //   WITHOUT   #  
 /*  cout << "older ";
   for (int  i=0;  i  < older.size(); i++) {
       cout << older[i] << " ";
   }
   cout << endl;
   cout << "old ";
   for (int  j= 0;  j < old.size();  j++ ) {
       cout << old[j] <<" ";
   }
   cout <<  endl; */ 
   int j =0;
   for(int i =0;  i < old.size();  i++ ) {
       if(len == old[i]) {
           cnt++;
       }
       if(cnt >= 2) {
           cout << "YES";
           return  0;
       }
   }

   cout <<"NO";
   return 0;
}
