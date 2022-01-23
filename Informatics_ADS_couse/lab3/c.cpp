#include <iostream> 
#include <vector> 
using  namespace  std; 

int main() {
    int x;
    cin >> x; 
    vector<long> array(x); 
    long max;
    int id = 0;
 //   for(int i = 0; i  < x; i++) {
  //      cin >> array[i];
  //      max = array[0];
  //      id = 0;
  //      if(max < array[i]) {
  //          max = array[i];
  //          id = i;

  //      }
 //   }
    for(int i = 0; i < x;  i++) {
        cin >> array[i];
    }
    max = array[0];
    for(int i  = 0; i < array.size(); i++) 
    {
        if(max < array[i]) 
        {
          max = array[i];
          id = i;
        }
    }
    cout << id + 1 << " ";
    return 0;
}
