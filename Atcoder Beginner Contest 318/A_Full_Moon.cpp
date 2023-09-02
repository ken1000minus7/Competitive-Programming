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
    ll n, m, p;
    cin >> n >> m >> p;
    int ans = 0;
    for(int i = m; i <= n; i += p) {
        ans++;
    }
    cout << ans << "\n";
    return 0;
}