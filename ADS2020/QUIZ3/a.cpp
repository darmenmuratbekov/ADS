#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <cassert>
#include <unordered_map>
#include <bitset>
#include <unordered_set>
 
using namespace std;
 
#define pb push_back
#define pp pop_back
#define f first
#define s second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair < int, int > pi;
typedef pair < int, ull > pu;
typedef pair < ll, ll > pl;
typedef vector < pair < int, ll > > cool;
 
const int inf = (int)1e9 + 123;
const int MAX_N = (int)1e5 + 123;
 
const int P = 123457;
const int mod = (int)1e9 + 7;
 
string s;
int hash_val[MAX_N], pw[MAX_N];
 
int get_hash(int l, int r) {
    assert(l <= r);
    if (l == 0) {
        return hash_val[r];
    } else {
        int val = hash_val[r] - (1ll * hash_val[l - 1] * pw[r - l + 1] % mod);
        if (val < 0) {
            val += mod;
        }
        return val;
    }
}
 
int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> s;
 
    pw[0] = 1;
    for (int i = 1; i <= s.size(); i++) {
        pw[i] = (1ll * pw[i - 1] * P) % mod;
    }
 
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            hash_val[i] = s[i];
        } else {
            hash_val[i] = (1ll * hash_val[i - 1] * P + s[i]) % mod;
        }
    }
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        // c = s[i .. len - 1]
        if (i % 2 == 0 && i / 2 > 0) {
            // a + b = s[0 .. i - 1]
            if (get_hash(0, i / 2 - 1) == get_hash(i / 2, i - 1)) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
