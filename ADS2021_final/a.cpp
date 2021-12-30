
#include  <iostream>
#include  <algorithm>
#include <vector>

using namespace std;

int n,k;
int a[100005];
long long sum[100005];
long long dp[1005][100005];

int main(){
    cin >> n>>k;
    int idt = 0;
    if(n == 2) {
        for (int i =0;  i < n; i++) {
           cin >> a[i];
           idt = idt + a[i];       
         }
         cout << idt;
         return 0;
        
    }
    for (int i=0;i< n;i++) {
        cin>>a[i];
        sum[i]=sum[i-1] + a[i];
    }
    for (int k_i= 0;k_i<=k;k_i++){
        for (int i=0;i<=n;i++){
            if (i < k_i) {
                dp[k_i][i]=(long long)(1e18);
            }

            else {
                if (k_i == 1) {
                    dp[k_i][i] = sum[i];
                } else {
                    dp[k_i][i] = (long long)(1e18);
                    for (int j=i; j >0;j--){
                        dp[k_i][i] = min(dp[k_i][i], max(sum[i] - sum[j - 1], dp[k_i - 1][j - 1]));
                    }
                }
            }
        }
    }
    cout << dp[k][n] << endl;
    return 0;
}
