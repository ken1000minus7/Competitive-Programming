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
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> arr(n, vector<ll>(m));
        vector<vector<ll>> pref(m, vector<ll>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
                pref[j][i] = arr[i][j];
            }
        }
        for(int j = 0; j < m; j++) {
            sort(all(pref[j]));
            for(int i = 0; i < n; i++) {
                arr[i][j] = pref[j][i];
                if(i > 0) pref[j][i] += pref[j][i - 1];
            }
        }
        ll ans = 0;
        for(int j = 0; j < m; j++) {
            for(int i = 0; i < n; i++) {
                ans += pref[j][n - 1] - pref[j][i] - ((n - i - 1) * arr[i][j]);
                // cout << pref[j][i] << " ";
            }
            // cout << "\n";
        }
        cout << ans << "\n";
    }
}