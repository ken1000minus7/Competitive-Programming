#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;

int main()
{
    FIO
    int n;
    cin >> n;
    vector<vector<int>> adj(2 * n + 2, vector<int>());
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        adj[a].push_back(2 * i);
        adj[a].push_back(2 * i + 1);
    }
    vector<int> done(2 * n + 2);
    vector<int> dist(2 * n + 2);
    queue<pair<int,int>> q;
    q.push({1, 0});
    while(!q.empty()) {
        auto p = q.front();
        q.pop();
        int i = p.first;
        int gen = p.second;
        if(done[i]) continue;
        done[i]++;
        dist[i] = gen;
        for(int j: adj[i]) {
            q.push({j, gen + 1});
        }
    }
    for(int i = 1; i <= 2 * n + 1; i++) {
        cout << dist[i] << "\n";
    }
    return 0;
}