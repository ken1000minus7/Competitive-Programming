#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

int main()
{
    FIO
    int n, x;
    cin >> n >> x;
    vector<vector<int>> dp(x + 1, vector<int>(n, -1));
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }
    auto stuff = [&](auto &&self, int val, int i) -> int {
        if(val == 0) return 1;
        if(val < 0 || i >= n) return 0;
        if(dp[val][i] != -1 ) return dp[val][i];
        int sum = 0;
        for(int j = 0; j <= arr[i].second; j++) {
            if(self(self, val - sum, i + 1)) {
                return dp[val][i] = 1;
            }
            sum += arr[i].first;
        }
        return dp[val][i] = 0;
    };
    if(stuff(stuff, x, 0)) YES
    else NO
    return 0;
}