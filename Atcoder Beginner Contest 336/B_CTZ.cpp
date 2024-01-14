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
    ll n;
    cin >> n;
    int ans = 0;
    while(n > 0 && n % 2 == 0) {
        ans++;
        n /= 2;
    }
    cout << ans << "\n";
    return 0;
}