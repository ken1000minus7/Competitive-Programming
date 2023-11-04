#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using namespace std;

int find(int i, vector<int> &parent) {
    if(parent[i] == -1) return i;
    return parent[i] = find(parent[i], parent);
}

void unify(int i, int j, vector<int> &parent, vector<int> &rank) {
    i = find(i, parent);
    j = find(j, parent);
    if(i == j) return;
    if(rank[i] >= rank[j]) {
        parent[j] = i;
        if(rank[i] == rank[j]) rank[i]++;
    }
    else {
        parent[i] = j;
    }
}
    

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> parent(graph.size(),-1);
        vector<int> rank(graph.size(),0);
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                if(find(graph[i][j],parent)==find(i,parent)) return false;
                else if(j>0) unify(graph[i][j],graph[i][j-1],parent,rank);
            }
        }
        return true;
    }

int main()
{
    FIO
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    bool op = true;
    for(int i = 0; i < m; i++) {
        cin >> a[i];
        a[i]--;
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
        b[i]--;
        if(a[i] == b[i]) {
            op = false;
        }
    }
    if(!op) {
        NO
        return 0;
    }
    vector<set<int>> adji(n);
    for(int k = 0; k < m; k++) {
        int i = a[k];
        int j = b[k];
        adji[i].insert(j);
        adji[j].insert(i);
    }
    vector<vector<int>> adj;
    for(int i = 0; i < n; i++) {
        vector<int> v(all(adji[i]));
        adj.push_back(v);
    }
    if(isBipartite(adj)) {
        YES
    }
    else NO
    return 0;
}