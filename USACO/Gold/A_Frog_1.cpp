#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

ll dostuff(int i, vector<ll> &arr, vector<ll> &dp) {
    if(i == arr.size() - 1) return 0;
    if(dp[i] != -1) return dp[i];
    dp[i] = dostuff(i + 1, arr, dp) + abs(arr[i + 1] - arr[i]);
    if(i < arr.size() - 2) dp[i] = min(dp[i], dostuff(i + 2, arr, dp) + abs(arr[i + 2] - arr[i]));
    return dp[i];
}

int main()
{
    FIO
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<ll> dp(n, -1);
    cout << dostuff(0, arr, dp) << "\n";
    return 0;
}