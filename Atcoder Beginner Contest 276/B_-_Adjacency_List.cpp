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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>());
    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 0; i < n; i++) {
        cout << adj[i].size() << " ";
        sort(all(adj[i]));
        for(int j: adj[i]) {
            cout << (j + 1) << " ";
        }
        cout << "\n";
    }
    return 0;
}