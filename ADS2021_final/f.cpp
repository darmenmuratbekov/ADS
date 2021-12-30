#include  <iostream>
#include  <algorithm>
#include <vector>

using namespace std;

int p[500005];

void kmp(string &s){
    p[0] = 0;
    for(int i = 1; i < s.size(); ++i){
       int j = p[i-1];
       while(j > 0 && s[i] != s[j]){
           j = p[j - 1];
       }
       if(s[i] == s[j]) j = j + 1;
       p[i] = j;
    }
}


int main(){
    int x;
    cin >>  x;
    string s;
    int h;
    for (int test = 0; test  < x;  test++) {
        cin >> s >> h;
        kmp(s);
        cout << 0ll + s.size() + 1ll * (h - 1) * (s.size() - p[s.size() - 1]) << endl;
    }
    return 0;
}
