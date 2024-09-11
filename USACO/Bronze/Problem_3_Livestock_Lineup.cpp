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
    if (fopen("lineup.in", "r")) {
		freopen("lineup.in", "r", stdin);
		freopen("lineup.out", "w", stdout);
	}
    int n;
    cin >> n;
    vector<string> arr = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    sort(all(arr));
    vector<vector<int>> adj(8, vector<int>());
    auto ind = [&](string s) {
        return find(all(arr), s) - arr.begin();
    };
    for(int i = 0; i < n; i++) {
        vector<string> curr(6);
        for(int j = 0; j < 6; j++) cin >> curr[j];
        string s1 = curr[0];
        string s2 = curr[5];
        int i1 = ind(s1), i2 = ind(s2);
        adj[i1].push_back(i2);
        adj[i2].push_back(i1);
    }
    vector<int> done(8);
    auto dfs = [&](auto &&self, int i, bool print) -> void {
        if(done[i]) return;
        done[i]++;
        if(print) cout << arr[i] << "\n";
        for(int j : adj[i]) self(self, j, print);
    };
    vector<string> starts;
    for(int i = 0; i < 8; i++) {
        if(done[i] || adj[i].size() > 1) continue;
        starts.push_back(arr[i]);
        dfs(dfs, i, false);
    }
    sort(all(starts));
    done = vector<int>(8);
    for(string s : starts) {
        dfs(dfs, ind(s), true);
    }
    return 0;
}