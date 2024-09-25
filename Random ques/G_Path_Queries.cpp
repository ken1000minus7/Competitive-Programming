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
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> arr;
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        u--, v--;
        arr.push_back({w, u, v});     
    }
    vector<int> parent(n, -1);
    vector<int> rank(n);
    vector<ll> count(n, 1);

    function<int(int)> find;
    find = [&](int i) {
        if(parent[i] == -1) return i;
        return find(parent[i]);
    };

    auto unify = [&](int i, int j) {
        i = find(i);
        j = find(j);
        if(i == j) return;
        if(rank[i] >= rank[j]) {
            parent[j] = i;
            if(rank[j] == rank[i]) rank[i]++;
        }
        else {
            parent[i] = j;
        }
        int tot = count[i] + count[j];
        count[i] = tot;
        count[j] = tot;
    };

    auto nodes = [&](int i) {
        i = find(i);
        return count[i];
    };

    auto paths = [&](int i) {
        ll c = nodes(i);
        return (c * (c - 1)) / 2;
    };

    sort(all(arr));
    vector<pair<ll, ll>> queries;
    for(int i = 0; i < m; i++) {
        ll a;
        cin >> a;
        queries.push_back({a, i});
    }
    sort(all(queries));
    vector<ll> ans(m);
    ll val = 0;
    int j = 0;
    for(auto p : queries) {
        ll a = p.first;
        ll i = p.second;
        while(j < n - 1 && arr[j][0] <= a) {
            ll u = arr[j][1], v = arr[j][2];
            val -= paths(u) + paths(v);
            unify(u, v);
            val += paths(u);
            j++;
        }
        ans[i] = val;
    }
    for(auto a : ans) cout << a << " ";
    cout << "\n";
    return 0;
}