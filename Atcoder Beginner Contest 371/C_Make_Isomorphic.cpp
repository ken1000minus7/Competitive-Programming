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
    int mg;
    cin >> mg;
    vector<vector<int>> adjg(n, vector<int>(n)), adjh(n, vector<int>(n));
    for(int i = 0; i < mg; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adjg[u][v]++, adjg[v][u]++;
    }
    int mh;
    cin >> mh;
    for(int i = 0; i < mh; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adjh[u][v]++, adjh[v][u]++;
    }

    ll ans = INT64_MAX;
    vector<vector<ll>> arr;
    for(int i = 0; i < n - 1; i++) {
        vector<ll> row;
        for(int j = 0; j < n - i - 1; j++) {
            ll a;
            cin >> a;
            row.push_back(a);
        }
        arr.push_back(row);
    }

    auto get = [&](int i, int j) {
        return arr[i][j - i - 1];
    };

    vector<int> perm;
    for(int i = 0; i < n; i++) perm.push_back(i);

    do {
        ll mans = 0;
        // cout << "perm\n";
        // for(int a : perm) cout << a << " ";
        // cout << "\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int hi = perm[i], hj = perm[j];
                if(hj <= hi || adjg[i][j] == adjh[hi][hj]) continue;
                // cout << "add or kick : " << hi << " " << hj << "\n";
                mans += get(hi, hj);
            }
        }
        // cout << mans << "\n";
        ans = min(ans, mans);
    } while(next_permutation(all(perm)));
    cout << ans << "\n";
    return 0;
}