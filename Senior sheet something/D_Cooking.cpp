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
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    vector<int> dp(sum + 1);
    for(int i = 0; i <= sum; i++) {
        dp[i] = max(i, sum - i);
    }
    for(int i = n - 1; i >= 0; i--) {
        vector<int> ndp(sum + 1);
        for(int j = 0; j <= sum; j++) {
            ndp[j] = dp[j];
            if(j + arr[i] <= sum) {
                ndp[j] = min(ndp[j], dp[j + arr[i]]);
            }
        }
        dp = ndp;
    }
    cout << dp[0] << "\n";
    return 0;
}