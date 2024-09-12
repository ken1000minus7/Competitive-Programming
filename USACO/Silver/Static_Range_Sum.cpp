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
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n), pref(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        pref[i] = arr[i];
        if(i > 0) pref[i] += pref[i - 1];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << (pref[r - 1] - pref[l] + arr[l]) << "\n";
    }
    return 0;
}