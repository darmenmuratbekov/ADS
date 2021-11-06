#include <iostream>
#include <queue>
#include <deque>
using namespace std;
int main() {
 


  int x; 
  cin >> x; 
  int  ass;
  int rr;
  int ss;
  deque<int > xx;
 bool ok =  true;
  for (int i = 0;  i < x;  i++) {
      cin >> ass;
        if(ass == 1 &&  ok  ==  true ) { 
        cin  >> rr;
        xx.push_back(rr);
        } 
        if (ass == 1  &&  ok == false) {
            cin >> rr;
         xx.push_front(rr);
        }
        if(ass != 1) {
            if(ok ==  true) {
                ok =  false;
            }
            else {
                ok =  true;
            }
        }
  }
 if(ok ==  true) {
    while(!xx.empty()) {
        cout << xx.front() << " ";
        xx.pop_front();
    }

 }
 else {
     while(!xx.empty() ) {
         cout << xx.back() << " ";
         xx.pop_back();
     }
 }




    return 0;
}
