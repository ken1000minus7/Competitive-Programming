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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<int>> inds(m + 1, vector<int>());
    vector<int> colors(n);
    for(int i = 0; i < n; i++) {
        cin >> colors[i];
        inds[colors[i]].push_back(i);
    }
    string ans = "";
    for(int i = 0; i < n; i++) {
        auto it = lower_bound(all(inds[colors[i]]), i);
        if(it == inds[colors[i]].begin()) it = prev(inds[colors[i]].end());
        else it = prev(it);
        ans += s[*it];
    }
    cout << ans << "\n";
    return 0;
}