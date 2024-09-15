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
    string name = "haybales";
    string input = name + ".in", output = name + ".out";
    if (fopen(input.c_str(), "r")) {
        freopen(input.c_str(), "r", stdin);
        freopen(output.c_str(), "w", stdout);
    }

    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    while(q--) {
        ll l, r;
        cin >> l >> r;
        int li = lower_bound(all(arr), l) - arr.begin();
        int ri = upper_bound(all(arr), r) - arr.begin() - 1;
        cout << max(0, ri - li + 1) << "\n";
    }
    return 0;
}