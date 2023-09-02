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
    int n, d;
    ll p;
    cin >> n >> d >> p;
    priority_queue<ll> pq;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        pq.push(a);
        ans += a;
    }
    while(!pq.empty()) {
        ll s = 0;
        for(int i = 0; i < d && !pq.empty(); i++) {
            s += pq.top();
            pq.pop();
        }
        if(p < s) {
            ans = ans - s + p;
        }
        else break;
    }
    cout << ans << "\n";
    return 0;
}