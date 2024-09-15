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
    ll n;
    cin >> n;
    vector<vector<ll>> inds(n + 1, {-1});
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        inds[arr[i]].push_back(i);
    }
    for(auto &v : inds) v.push_back(n);
    ll ans = 0;
    ll totsub = (n * (n + 1)) / 2;
    for(int i = 1; i <= n; i++) {
        ll subcount = 0;
        for(int j = 0; j < inds[i].size() - 1; j++) {
            ll elec = inds[i][j + 1] - inds[i][j] - 1;
            subcount += (elec * (elec + 1)) / 2;
        }
        ans += totsub - subcount;
    }
    cout << ans << "\n";
    return 0;
}