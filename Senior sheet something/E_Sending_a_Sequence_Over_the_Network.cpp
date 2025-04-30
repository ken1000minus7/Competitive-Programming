#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<vector<int>> backs(n, vector<int>());
        for(int i = n - 1; i >= 0; i--) {
            if(i - arr[i] >= 0) {
                backs[i - arr[i]].push_back(i + 1);
            }
        }
        vector<bool> dp(n + 1, false);
        dp[n] = true;
        for(int i = n - 1; i >= 0; i--) {
            if(i + arr[i] < n) dp[i] = dp[i] || dp[i + arr[i] + 1];
            for(int a : backs[i]) {
                dp[i] = dp[i] || dp[a];
            }
            
        }
        if(dp[0]) YES
        else NO
    }
    return 0;
}