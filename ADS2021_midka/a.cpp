
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector <int>&x) {
    int sum=0;
    for (auto i : x) {
        sum += i;
    }
    return sum;
}

bool comparator(vector <int> &a, vector<int> &b) {  ///  vector<int>&a, vector<int>& b;
                           
    if (sum(a) != sum(b)) {
        return sum(a) > sum(b);
    }
    return a < b;
}

int main () {
    int n,m;
    cin >> n >> m;
    vector < vector <int> > a;  //  a[i] =  {a[j], a[j+1], a[j+2], a[j+3], a[j+finite]}
    for(int i = 0;i<n; i++){
        vector<int>q;
        for(int j=0;j<m;j++) {
            int x;
            cin >> x;
            q.push_back(x);
        }
        a.push_back(q);
    }
    sort(a.begin(), a.end(), comparator);
    for (int i=0; i<n;i++) {
        for (int j=0;j<m;j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
