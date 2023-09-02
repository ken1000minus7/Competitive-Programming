#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

class Edge {
    public:
    int i, j;
    ll w;
    Edge(int i, int j, ll w): i(i), j(j), w(w) {}
};

bool done(Edge e, ll b) {
    return ((b >> e.i) & 1) || ((b >> e.j) & 1);
}

void setty(ll &b, Edge e) {
    b = b | (1 << e.i) | (1 << e.j);
}

ll dostuff(ll b, int &n, vector<Edge> &edges, vector<ll> &dp) {
    if(dp[b] != -1) return dp[b];
    ll ans = 0;
    for(auto e: edges) {
        if(done(e, b)) continue;
        ll temp = b;
        setty(temp, e);
        ans = max(ans, e.w + dostuff(temp, n, edges, dp));
    }
    return dp[b] = ans;
}

int main()
{
    FIO
    int n;
    cin >> n;
    vector<ll> dp(100000, -1);
    vector<Edge> edges;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            ll w;
            cin >> w;
            Edge edge(i, j, w);
            edges.push_back(edge);
        }
    }
    cout << dostuff(0, n, edges, dp) << "\n";
    return 0;
}