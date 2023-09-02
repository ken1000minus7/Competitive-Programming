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
    vector<vector<int>> done(101, vector<int>(101));
    int n;
    cin >> n;
    for(int _ = 0; _ < n; _++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int i = a; i < b; i++) {
            for(int j = c; j < d; j++) {
                done[i][j]++;
            }
        }
    }
    int ans = 0; 
    for(int i = 0; i < 101; i++) {
        for(int j = 0; j < 101; j++) {
            if(done[i][j]) ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}