#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

int main()
{
    FIO
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int ind = lower_bound(all(arr), arr[i] + m) - arr.begin();
        ans = max(ans, ind - i);
    }
    cout << ans << "\n";
    return 0;
}