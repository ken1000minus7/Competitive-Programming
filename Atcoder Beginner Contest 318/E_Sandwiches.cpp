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
    cin >> n;
    vector<ll> arr(n);
    ll ans = 0;
    vector<vector<ll>> inds(n + 1, vector<ll>());
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        inds[arr[i]].push_back(i);
    }
    for(auto p: inds) {
        for(int i = 1; i < p.size(); i++) {
            ans += (i) * ((ll) p.size() - i) * (p[i] - p[i - 1] - 1);
        }
    }
    cout << ans << "\n";
    return 0;
}