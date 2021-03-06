#include <iostream> 
#include <vector>

using namespace std;


int bin_search(vector<int> &a,  int k) {
    int l  = 0;
    int r = a.size()  - 1; 

    while(l  < r)  {
        int m = (l + r) / 2;
        if(a[m] == k) {
            return m;

        }
        if(a[m] > k)  {
            r = m  - 1;
        }
        else {
            l =  m + 1;
        }
        if(a[l] == k) {
            return l;
        }
    }
    return -1;
} 
int main() {
    int n,k;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;  i < n;  i++) {
        cin  >> a[i];
    }
    cin >> k;
   // int ind = bin_search(a,k);
    for(int i = 0;  i < n;  i++) {
        if(a[i] == k) {
            cout << i + 1 << " ";
        }
    }
    return 0;
}
