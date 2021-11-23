#include <iostream> 
#include <vector>
#include <algorithm> 
#include <string>
using namespace std; 

vector<string> conter;
vector<int> fx(string a, string s, int  len) {
 int n =  s.size(); 
 vector<int > current(n); 

 for (int  i = 1; i <  n; i++) { 
     int j  = current[i -1];
     while(j  > 0  &&  s[i] != s[j]) {
              j  =  current[j - 1];
     }
     if (s[i] == s[j]) {
         j = j  + 1;
         current[i] = j;
        
     }
     int k = 1;
     if(len ==  current[i]) {
         int j  =  i - len;
         while(k <= len) {
         cout << s[j] << " ";
         k = k +1;

         }
     }
     
 }

  return current;
}
vector<string> fxx(string a, string s, int len) { 
 //   cout << "darmen"  << endl;
    vector<string>dk;
    string mize = a.substr(0, s.size());
    string xize = a.substr(a.size()   - s.size(), s.size());
    if(mize == s && mize.size() != a.size()) {
        conter.push_back(mize);
        dk.push_back(mize);

    }
    return dk;
}
int main() {
   string a,b; 
   cin >>  a; 
   string aa; 
   int x; 
   string aaa;
   aaa = a; 
 //  cin >> aa;
   string world;
  /* cin >> world;
   cout << aa.size()  <<  endl; 
   cout << world.size()  <<  endl;
   int t   =  aa.size() -  world.size();
   cout << t  <<  endl;
   string xize = aa.substr(aa.size()  - world.size(), world.size());
   string mize = aa.substr(0, world.size());
   cout << mize << endl;
   cout << xize <<   endl; */ 

  //cin >> x;
  //  cin >> b; 
   string ab = "";
 
   int len = aaa.size();
   
   string newx;
   int k = 1; 
   int leng = 0;
   for (int j =  (len / 2), i = (len / 2); j < len, i >=0; j++, i-- ) {
       if(k  == 1) {
      //   cout << aaa[j] << endl;
           newx =  aaa[j];
           leng = newx.size();
           vector<string > odd = fxx(aaa, newx, leng);
        
           k++;
       }
       else {
        // cout << aaa[i] << " "  <<  aaa[j]  <<   endl;
           if(k == 2) {
               ab = aaa[i] + newx +  aaa[j];
               leng =  ab.size();
            // cout << ab  <<  endl;
               k++;
               vector<string>  odd= fxx(aaa, ab, leng);
            
           }
           else { 
               ab =  aaa[i] + ab +  aaa[j];
               leng =  ab.size(); 
               vector<string> odd = fxx(aaa, ab, leng);
            
            //  cout << ab <<  endl;
           }
       }
   }
   if(conter.size() == 0) {

       cout << "Just  a  legend";
           return 0;
   }
   else {

     for(int i =0;  i < conter.size(); i++) {

          cout << conter[i]  << " ";

   }

}

    return 0;
}
