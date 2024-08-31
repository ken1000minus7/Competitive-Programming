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
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    ll i = 0;
    ll ans = 0;
    while(i < n - 1) {
        ll d = arr[i + 1] - arr[i];
        ll j = i + 1;
        while(j < n - 1 && arr[j + 1] - arr[j] == d) j++;
        ll len = j - i + 1;
        ans += (len * (len + 1)) / 2;
        if(i > 0) ans--;
        i = j;
    }
    cout << ans << "\n";
    return 0;
}