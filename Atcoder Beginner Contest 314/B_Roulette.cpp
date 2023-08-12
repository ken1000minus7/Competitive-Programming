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
    int n;
    cin >> n;
    vector<vector<int>> inds(37, vector<int>());
    vector<int> cts;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for(int j = 0; j < m; j++) {
            int a;
            cin >> a;
            inds[a].push_back(i);
        }
        cts.push_back(m);
    }
    int x;
    cin >> x;
    sort(all(inds[x]), [&cts](int &a, int &b) {
        if(cts[a] == cts[b]) return a < b;
        return cts[a] < cts[b];
    });
    // cout << inds[x].size() << "\n";

    int c = inds[x].size() > 0 ? cts[inds[x][0]] : 0;
    vector<int> ans;
    for(int a: inds[x]) {
        if(cts[a] > c) break;
        ans.push_back(a + 1);
    }
    cout << ans.size() << "\n";
    for(int a: ans) cout << a << " " ;
    cout << "\n";
    return 0;
}