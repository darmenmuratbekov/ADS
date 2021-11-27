#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <string>


using namespace std; 
int cnt =0;
vector<int > prefix_func(string s) {

   int  n =  s.size(); 
   
   vector<int > p(n);
  

p[0] =0;


for (int i =1;  i  <n;  i++) {

    int j = p[i -1 ];


    while(j > 0 && s[i] != s[j]) {
        j =  p[j -1];
    }
    if(s[i] == s[j]) {
        j++; 
     p[i] =j;
    }
}
         return p;
}
void checking(vector<int>&arr, int n) {
    vector<int > app(n); 


    for(int i =0;  i < arr.size();  i++) {
        if(n == arr[i]) { 
            cnt++;
        } 
    }
}
int main() {
 

  string s; 
  cin >>  s; 

  int  len =  s.size(); 

  vector<int > arr = prefix_func(s);
  
  for(int i = arr[len - 1];  i  > 0; i= arr[i - 1]) { 
       checking(arr, i);
       if(cnt > 1) {
           cout << s.substr(0 , i);
           return 0;
       }
  }
  
  cout <<  "just a legend";
   return 0;


