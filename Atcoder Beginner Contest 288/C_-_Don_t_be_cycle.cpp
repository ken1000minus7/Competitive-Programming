#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

void dfs(int i, int parent, vector<vector<int>> &adj, int &edges, int &nodes, vector<int> &done) {
    done[i]++;
    nodes++;
    edges += adj[i].size();
    for(int j: adj[i]) {
        if(!done[j]) {
            dfs(j, i, adj, edges, nodes, done);
        }
    }
}

int main()
{
    FIO
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>());
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> done(n);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(done[i]) continue;
        int edges = 0, nodes = 0;
        dfs(i, -1, adj, edges, nodes, done);
        edges /= 2;
        ans += edges - nodes + 1;
        // cout << nodes << " " << edges << '\n';
    }
    cout << ans << "\n";
    return 0;
}