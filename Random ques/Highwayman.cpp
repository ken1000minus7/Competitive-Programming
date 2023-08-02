#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

int dostuff(int i, vector<int> &fuel, vector<int> &cost, vector<int> &dp) {
    if(i == 0) return 0;
    if(i < 0) return 10000;
    if(dp[i] != -1) return dp[i];
    int ans = 10000;
    for(int j = 0; j < fuel.size(); j++) {
        ans = min(ans, cost[j] + dostuff(i - fuel[j], fuel, cost, dp));
    }
    return dp[i] = ans;
}

int main()
{
    FIO
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vector<int> fuel(m);
    for(int i = 0; i < m; i++) {
        cin >> fuel[i];
    }
    cin >> m;
    vector<int> cost(m);
    for(int i = 0; i < m; i++) {
        cin >> cost[i];
    }
    vector<int> dp(1001, -1);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += dostuff(arr[i], fuel, cost, dp);
    }
    cout << ans << "\n";
    return 0;
}