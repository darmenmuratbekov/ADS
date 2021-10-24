#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int used[101];
int c[101];
int math=1;
vector<int> w;

int find_dist(int a, int b) {
    queue<pair<int, int> > q;
    q.push(make_pair(a, 0));
    used[a] = 1;
    c[a] = a;
    //w[a] = a;

    while (!q.empty()) {
        int p = q.front().first;
        int d = q.front().second;

        if (p == b) {
            return d;
    }
        // p + 1
        if (used[p + 1] == 0) {
            q.push(make_pair(p + 1, d + 1));
            used[p + 1] = 1;
            c[p + 1] = p; 
         //   w[p+1] = p;
            math++;
        }

        // p * 2
        if (used[p * 2] == 0) {
            q.push(make_pair(p * 2, d + 1));
            used[p * 2] = 1;
            c[p * 2] = p;
         //   w[p * 2] =  p;
            math++;
        }

        // p - 1
        if (p - 1 >= 0 && used[p - 1] == 0) {
            q.push(make_pair(p - 1, d + 1));
            used[p - 1] = 1;
            c[p - 1] = p;
        //    w[p -1]  = p;
            math++;
        }

        // p / 2
        if (used[p / 2] == 0) {
            q.push(make_pair(p / 2, d + 1));
            used[p / 2] = 1;
            c[p / 2] = p;
        //    w[p / 2]  =p;
            math++;
        }

        q.pop(); 
    }
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << find_dist(a, b) << endl;
    for(int  i =0;  i < 100;  i++) {
        cout << c[i] << " ";
    }
    cout <<  endl;
    vector<int> result;
    result.push_back(b); // 12 6 3 2
    int t = b; // 3
    while (c[t] != t) {
        t = c[t];
        cout << t << " ";
        result.push_back(t);
    }
    cout <<  endl ;
    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i] << " "; 
    cout << endl;
    cout << c[8];
    return 0;
}
