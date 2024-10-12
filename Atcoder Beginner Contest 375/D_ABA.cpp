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
    string s;
    cin >> s;
    int n = s.length();
    vector<vector<int>> inds(26, vector<int>());
    for(int i = 0; i < n; i++) inds[s[i] - 'A'].push_back(i);
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        // cout << "my time " << i << "\n";
        for(int j = 0; j < 26; j++) {
            ll ind = upper_bound(all(inds[j]), i) - inds[j].begin();
            ll right = inds[j].size() - ind;
            ll left = ind;
            if(j == (s[i] - 'A')) left--;
            ans += left * right;
            // cout << j << " " << ind << " " << right << "\n";
        }
    }
    cout << ans << "\n";
    return 0;
}