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
    int q;
    cin >> q;
    while(q--) {
        int t,k;
        cin >> t >> k;
        k--;
        if(t == 1) {
            ll x;
            cin >> x;
            arr[k] = x;
        }
        else {
            cout << arr[k] << "\n";
        }
    }
    return 0;
}