#include <iostream> 
#include <vector>
using namespace std;
int bind(vector<long> &array, long max)  {
   int start = 0; 
   int r = array.size() - 1;
   while(start < r) {
       int midle = (r + start) / 2;

       if(a[midle] == max)  {
         return a[midle];
       }
       if(a[midle] > max) {
           r = midle - 1; 

       }
       if(a[r] == max) {
          cout << max;
       }
       else {
           r = midle + 1;
       }
       if(a[r] == max ) {
        cout << max;
       }
   }
   if(a[r] == max) {
       return max;
   }
   return -1;
}
int main()  {
    int x; 
    cin >> x;
    vector<long> array(x);  // creating array
    for(int i = 0; i < x; i++) {
        cin >> array[i];
    }
    long max =  array[0];
    bind(array,max);
    for(int i = 0; i < x;  i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }
    cout <<  max << " ";
    return 0;
}
