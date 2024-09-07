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
    int n, m, q;
    cin >> n >> m >> q;
    vector<set<int>> rbomb(n, set<int>()), cbomb(m, set<int>());
    vector<vector<int>> bomb(n, vector<int>(m, 1));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            rbomb[i].insert(j);
            cbomb[j].insert(i);
        }
    }

    while(q--) {
        int i, j;
        cin >> i >> j;
        i--, j--;
        // cout << "cols\n";
        // for(int i = 0; i < m; i++) {
        //     cout << i << " : ";
        //     for(int a : cbomb[i]) cout << a << " ";
        //     cout << '\n';
        // }
        // cout << "rows\n";
        // for(int i = 0; i < n; i++) {
        //     cout << i << " : ";
        //     for(int a : rbomb[i]) cout << a << " ";
        //     cout << '\n';
        // }
        // for(auto v : bomb) {
        //     for(auto a : v) {
        //         cout << a << ' ';
        //     }
        //     cout << "\n";
        // }
        // cout << "go\n";
        if(bomb[i][j]) {
            bomb[i][j]--;
            rbomb[i].erase(j);
            cbomb[j].erase(i);
            continue;
        }
        auto rit = rbomb[i].upper_bound(j);
        auto uit = cbomb[j].lower_bound(i);
        auto lit = rbomb[i].lower_bound(j);
        auto dit = cbomb[j].upper_bound(i);

        vector<int> rdel, cdel;
        if(rit != rbomb[i].end()) {
            int ind = *rit;
            if(bomb[i][ind]) {
                bomb[i][ind]--;
                rdel.push_back(ind);
                cbomb[ind].erase(i);
            }
        }
        if(lit != rbomb[i].begin()) {
            int ind = *prev(lit);
            if(bomb[i][ind]) {
                bomb[i][ind]--;
                rdel.push_back(ind);
                cbomb[ind].erase(i);
            }
        }
        if(dit != cbomb[j].end()) {
            int ind = *dit;
            if(bomb[ind][j]) {
                bomb[ind][j]--;
                rbomb[ind].erase(j);
                cdel.push_back(ind);
            }
        }
        if(uit != cbomb[j].begin()) {
            int ind = *prev(uit);
            if(bomb[ind][j]) {
                bomb[ind][j]--;
                rbomb[ind].erase(j);
                cdel.push_back(ind);
            }
        }
        for(int a : rdel) rbomb[i].erase(a);
        for(int a : cdel) cbomb[j].erase(a);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans += bomb[i][j];
            // cout << bomb[i][j] << " ";
        }
        // cout << "\n";
    }
    cout << ans << "\n";
    return 0;
}