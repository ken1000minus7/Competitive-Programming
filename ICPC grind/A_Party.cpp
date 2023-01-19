#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

void dfs(int i, vector<vector<int> > &adj, int l, int &ans) {
    ans = max(ans, l);
    for(int j = 0; j < adj[i].size(); j++) {
        dfs(adj[i][j], adj, l + 1, ans);
    }
}

int main()
{
    FIO
    int n;
    cin >> n;
    vector<vector<int> > adj(n, vector<int>());
    vector<int> roots;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        a--;
        if(a < 0) {
            roots.push_back(i);
        }
        else {
            adj[a].push_back(i);
        }
    }
    int ans = 0;
    for(int i = 0; i < roots.size(); i++) {
        dfs(roots[i], adj, 1, ans);
    }
    cout << ans << "\n";
    return 0;
}