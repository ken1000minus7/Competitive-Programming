#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using namespace std;

int main()
{
    FIO
    int n, m;
    cin >> n >> m;
    vector<int> indegree(n);
    vector<vector<int>> adj(n, vector<int>());
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        indegree[b]++;
    }
    queue<int> q;
    for(int i = 0; i < n; i++) {
        if(!indegree[i]) q.push(i);
    }
    bool op = true;
    vector<int> topo;
    while(!q.empty()) {
        int i = q.front();
        q.pop();
        if(!q.empty()) {
            op = false;
            break;
        } 
        topo.push_back(i);
        for(int j: adj[i]) {
            if(indegree[j] == 0) {
                op = false;
                break;
            }
            indegree[j]--;
            if(indegree[j] == 0) q.push(j);
        }
        if(!op) {
            break;
        }
    }
    if(op) {
        YES
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            ans[topo[i]] = i + 1;
        }
        for(int a : ans) {
            cout << a << ' ';
        }
        cout << "\n";
    }
    else NO
    return 0;
}