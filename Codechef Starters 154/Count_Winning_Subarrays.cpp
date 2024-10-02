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
        vector<int> arr(n);
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            ans += arr[i];
        }
        vector<pair<ll, ll>> inds;
        for(int i = 0; i < n; i++) {
            if(i < n - 1 && arr[i] == 1 && arr[i + 1] == 1) inds.push_back({i, 1});
            else if(i < n - 2 && arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1) inds.push_back({i, 2});
        }
        for(int i = 0; i < inds.size(); i++) {
            ll s = inds[i].first;
            ll e = s + inds[i].second;
            ll ba = i == 0 ? 0 : inds[i - 1].first + 1;
            ll fa = n - 1;
            ll forward = fa - e;
            ll back = s - ba;
            
            ans += (forward + 1) * (back + 1);
            // cout << s << " " << forward << " " << back << "ans -> " << ans << "\n";
        }
        cout << ans << "\n";
    }
    return 0;
}