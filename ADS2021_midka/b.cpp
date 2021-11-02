#include <iostream>
#include <vector>

using namespace std;
vector<int > result;
int xx;
int size;
int index =-1;
int arrs[100000];
int sum = 0;
int  heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    //  cout << "l " << i  <<" "<< n<<  endl;
    if(l < n && arr[l] < arr[largest]) {
        largest = l;
     //   cout << " dane";
    }
    if(r < n && arr[r] < arr[largest]) {
        largest = r;
     //   cout << " done"<< endl;
    }
    if(largest != i){
    //    cout << "LARGES"<< " " << largest<< " " << n<< endl;
   /*  for (int i =0;  i  < n;  i++ ) { 
          cout << arr[i] << " ";
      } */
     // cout << endl;
        swap(arr[i], arr[largest]);
    /*  for (int i =0;  i  < n;  i++ ) { 
          cout << arr[i] << " ";
      }
      cout <<  endl;
      return 0; */ 
        heapify(arr, n, largest);
    }
}

 void heapSort(int arr[], int n){
    for(int i = n / 2- 1; i >=0; i--)

        heapify(arr, n, i);
   // cout << "start" <<  endl;
    for(int i = n - 1; i > 0; i--){
        swap(arr[0], arr[i]);
     /*   if (i == 5) {
            for(int i =0;  i < 5; i++ )
            result.push_back(arr[i]);
        } */
        heapify(arr, i, 0);
    }
   // cout <<  endl;
  /*  for(int i =0; i  < 5;  i++ ) {
        cout << result[i] << " ";
    } */
    //cout <<  endl;
 } 

void check(int arr[],  int x) {
    heapSort(arr, x);
   // cout << "xx  ";
    for(int i =  x - 1 ;  i >=0; ) {
       xx =   arr[i] +  arr[i-1];
       
       index++;
       arrs[index] =  xx;
       i = i - 2;
       arr[i+1] = xx;
       i= i + 1;
       sum = sum + xx;
       if (i <=0) {
          // sum =  sum +  xx;
        //  cout << xx << endl;
       //   cout <<"sum  ";
          cout << sum ;
          break;
       }
    //  cout << xx << " " << endl;
    
      heapSort(arr, size);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int x; 
    cin >>  x; 
    int arr[x];
    for (int  i =0;  i < x;  i++ ) { 
        cin>>  arr[i];
    }

    //printArray(arr, x);

  //
 // heapify(arr, n, 0);
 // heapSort(arr, n);
  //  heapify(arr,  n, 0);
  //heapify(arr, n,0);
    check(arr, x);
   // printArray(arr, n);

    return 0;
}
