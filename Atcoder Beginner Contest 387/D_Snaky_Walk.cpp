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
    vector<string> arr(n);
    int si, sj;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 'S') si = i, sj = j;
        }
    }
    queue<vector<int>> q;
    vector<vector<vector<int>>> done(n, vector<vector<int>>(m, vector<int>(2)));
    q.push({si, sj, -1, 0});
    int ans = -1;
    while(!q.empty()) {
        auto v = q.front();
        int i = v[0], j = v[1], d = v[2], k = v[3];
        q.pop();
        if(i < 0 || i >= n || j < 0 || j >= m || (d != -1 && done[i][j][d]) || arr[i][j] == '#') continue;
        if(arr[i][j] == 'G') {
            ans = k;
            break;
        }
        if(d != 0) {
            q.push({i, j + 1, 0, k + 1});
            q.push({i, j - 1, 0, k + 1});
            done[i][j][1]++;
        }
        if(d != 1) {
            q.push({i + 1, j, 1, k + 1});
            q.push({i - 1, j, 1, k + 1});
            done[i][j][0]++;
        }
    }
    cout << ans << "\n";
    return 0;
}