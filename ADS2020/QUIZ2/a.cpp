#include <iostream>
#include <algorithm>

using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    //cout <<  "l   " << i  <<  endl;
    if(l < n && arr[l] < arr[largest]) {
       // cout <<  "arr[l]  and arr[largest]  " << arr[l]  <<  " "  << arr[largest] << endl;
    
        largest = l;
    }
    if(r < n && arr[r] < arr[largest])  { 
     //  cout << "arr[n]  and   arr[largest]"  <<  arr[r] << " "   << arr[largest] << endl;
   //    cout << "r  "  << r << endl;
        largest  =  r;
    }
    
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    for(int i = n / 2- 1; i >=0; i--) {
        
         heapify(arr, n, i);
    }
  
    for(int i = n - 1; i > 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void checking(int arr[], int n, int x) {
      int  i = 1;
      long long  sum =0;
    //  heapSort(arr, n); 
      while(i  <= x) {
          heapSort(arr,n);
          sum  =  arr[0] + sum;
          if(i < x) {

            arr[0] =  arr[0] -1;
            
          }
           i =  i +1;
      }
      cout <<  sum ;
}

void printArray(int arr[], int n){
    
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, x;

    cin >> n >>  x;
    int arr[n];
    for (int   i =0; i  < n;  i++ ) 
    {
       cin  >> arr[i];
    } 
    int  i =  n /2  -1; 
  // cout  <<  i <<  endl;
//  printArray(arr, n);

     heapSort(arr, n);
     checking(arr, n, x);



    return 0;
}
