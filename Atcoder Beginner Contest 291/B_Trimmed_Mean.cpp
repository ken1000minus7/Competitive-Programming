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
    ll ans = 0;
    vector<ll> arr(5 * n);
    for(int i = 0; i < 5 * n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    for(int i = n; i < 4 * n; i++) {
        ans += arr[i];
    }
    cout << fixed << setprecision(15) << (double) ans / (3 * n) << '\n';
    return 0;
}