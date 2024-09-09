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
    int q;
    cin >> q;
    unordered_map<ll, ll> arr;
    while(q--) {
        int t;
        cin >> t;
        if(t == 0) {
            ll k, v;
            cin >> k >> v;
            arr[k] = v;
        }
        else {
            ll k;
            cin >> k;
            cout << arr[k] << "\n";
        }
    }
    return 0;
}