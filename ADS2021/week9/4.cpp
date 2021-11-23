#include <iostream> 
#include <vector> 


using namespace std; 

vector<int> f(string s) {
    int n =  s.size();

    vector<int> pi(n); // create vector


    for (int i =1;  i  <  n;  i++) {


        int j  = pi[i-1]; 
        while(j > 0  &&  s[i] !=  s[j]) {
            j  = pi[j -1];
        }
        if(s[i] == s[j]) //j = j + 1; 
       // pi[i] = j;
       { 
           j   =    j  + 1; 
           pi[i] = j;
       }
    }


    return pi;
}
vector<char> fx(string sx) {
    int x  = sx.size();//  why  is we are create x   
                        // its  mean  we are create new value n
    vector<char>old(x); 
    for (int i =0; i <  sx.size(); i++) {
        old[i] = sx[i];
    }
    return old;
}
vector<int64_t> fxx(string sxx) {
    int xx =  sxx.size(); 
    vector<int64_t>older(xx); 
    for(int j =0;  j  <   older.size(); j++) {
        older[j] =  sxx[j];
    }
    return older;
}

vector<string> fxxx(string sxxx)  { 
    int zx = sxxx.size();
    vector<string>big(zx);
    big.push_back("daren");
    big.push_back(sxxx);

    return big;
}
int main()  {
    
    string s; 
    cin >> s; 
    
    vector<int > pize = f(s);
    vector<char> oldmen =  fx(s);
    vector<int64_t> oldermen =  fxx(s);
    vector<string> bigmen = fxxx(s);

    for (int i =0;  i < bigmen.size(); i++) {
        cout << bigmen[i] <<" ";
    }
    cout <<  endl;
    for(int i =0; i < oldermen.size(); i++) {
        cout << oldermen[i] << " "; // asci  code show 
    }
    cout <<  endl;
    for (int i =0;  i  <  oldmen.size();  i++) { 
        cout << oldmen[i] <<" "; 
    }
   cout <<  endl;
    for(int  i =0;  i <  pize.size();  i++) {
        cout << pize[i] <<" ";
    }




    return 0;
}
