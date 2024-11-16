#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
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



int main()
{
    FIO
    int n, q;
    cin >> n >> q;
    vector<int> parent(n, -1), rank(n), color(n), sz(n, 1), colorc(n, 1);
    vector<pair<int, int>> adj(n);

    function<int(int)> find;
    find = [&](int i) {
        if(parent[i] == -1) return i;
        return parent[i] = find(parent[i]);
    };

    auto unify = [&](int i, int j) {
        i = find(i);
        j = find(j);
        if(i == j) return;
        if(rank[j] > rank[i]) swap(i, j);
        parent[j] = i;
        if(rank[i] == rank[j]) rank[i]++;
        sz[i] += sz[j];
        sz[j] = sz[i];
        int st = min(adj[i].first, adj[j].first);
        int ed = max(adj[i].second, adj[j].second);
        adj[i] = {st, ed};
        adj[j] = adj[i];
    };

    auto getsize = [&](int i) {
        i = find(i);
        return sz[i];
    };

    auto paint = [&](int i, int c) {
        i = find(i);
        int count = getsize(i);
        colorc[color[i]] -= count;
        colorc[c] += count;
        color[i] = c;
    };

    auto getadj = [&](int i) {
        i = find(i);
        return adj[i];
    };
    auto getcolor = [&](int i) {
        i = find(i);
        return color[i];
    };

    for(int i = 0; i < n; i++) {
        color[i] = i;
        adj[i] = {i - 1, i + 1};
    }

    while(q--) {
        int t;
        cin >> t;
        if(t == 1) {
            int x, c;
            cin >> x >> c;
            x--, c--;
            paint(x, c);
            auto p = getadj(x);
            if(p.first >= 0 && getcolor(p.first) == c) unify(p.first, x);
            if(p.second < n && getcolor(p.second) == c) unify(p.second, x);
            // for(int a : color) {
            //     cout << a << " ";
            // }
            // cout << "\n";
        }
        else {
            int c;
            cin >> c;
            c--;
            cout << colorc[c] << "\n";
        }
    }
    return 0;
}