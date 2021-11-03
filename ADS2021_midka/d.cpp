#include <iostream> 
#include <deque>
#include <queue>

using namespace std; 
int main() {

 int x; 
 cin >>  x ;
 queue<pair<int, int >> position;


 long arr[x];
 for (int i =0; i  < x;  i++) {
     cin >>  arr[i];
 }
 int a,b;
 cin >>  a >>  b;
 long long  arrs[a][b];
 for (int i =0; i  < a;  i++) {
     for (int j =0;  j < b;  j++ ) {
         cin >>  arrs[i][j];
     }
 }
 long arrss[10000];

 int xx;
 bool  ok =  false ;
 for(int i =0; i  < x; i++) {
   xx  = arr[i];
  // cout << xx  << endl;
   for (int j =0;  j <   a; j++ ) {
       for (int k =0; k < b;  k++) {
         if (xx == arrs[j][k]) {

             position.push(make_pair(j,  k));
             ok =  true;
         }
       }
   }
   if (ok ==  false) {
       position.push(make_pair(-1,-1));
   }
 }
  for (int i =0;  i < x;  i++) {
   //   cout << position.front().first << " " << position.front().second<< endl;
    //  position.pop();

      if (position.front().first == -1 ) {
          cout <<  position.front().second  << endl;
          position.pop();
      }
      else {
          cout << position.front().first << " " << position.front().second << endl;
          position.pop();
      }
  }
return 0;

}
