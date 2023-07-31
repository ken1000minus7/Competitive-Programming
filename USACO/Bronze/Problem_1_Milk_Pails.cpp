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
    int x, y, m;
    cin >> x >> y >> m;
    int ans = 0;
    for(int i = 0; i * x <= m; i++) {
        for(int j = 0; i * x + j * y <= m; j++) {
            ans = max(ans, i * x + j * y);
        }
    }
    cout << ans << "\n";
    return 0;
}