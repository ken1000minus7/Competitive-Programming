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
    int m;
    cin >> m;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<vector<vector<int>>> indices(10, vector<vector<int>>(3, vector<int>()));
    for(int i = 0; i < m; i++) {
        int c1 = s1[i] - '0';
        int c2 = s2[i] - '0';
        int c3 = s3[i] - '0';

        indices[c1][0].push_back(i);
        indices[c2][1].push_back(i);
        indices[c3][2].push_back(i); 
    }
    int ans = -1;
    for(auto inds: indices) {
        auto v1 = inds[0];
        auto v2 = inds[1];
        auto v3 = inds[2];
        for(auto i: v1) {
            for(auto j: v2) {
                for(auto k: v3) {
                    int cans;
                    if(i != j && j != k && k != i) {
                        cans = max({i, j, k});
                    }
                    else if(i == j && j == k) {
                        cans = i + 2 * m;
                    }
                    else {
                        int maxi = max({i, j, k});
                        int mini = min({i, j, k});
                        int c = (maxi == i) + (maxi == j) + (maxi == k);
                        if(c > 1) {
                            cans = maxi + m;
                        }
                        else {
                            cans = mini + m;
                        }
                    }
                    ans = ans == -1 ? cans : min(ans, cans);
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}