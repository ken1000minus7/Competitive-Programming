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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> x(n), a(n);
        for(int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> ans(n);
        
        if(n >= 2) ans[n - 2] = x[n - 1] - x[n - 2] + a[n - 1];
        for(int i = n - 3; i >= 0; i--) {
            ans[i] = max(a[i + 1], ans[i + 1]) + x[i + 1] - x[i];
        }
        ll anss = 0;
        for(int i = 0; i < n - 1; i++) {
            anss = max(anss, ans[i] + a[i]);
        }
        cout << anss << '\n';
    }
    return 0;
}