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
    int n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll>());
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            ll a;
            cin >> a;
            arr[i].push_back(a);
        }
    }
    ll i = 1;
    for(int k = 1; k <= n; k++) {
        if(i >= k) i = arr[i - 1][k - 1];
        else i = arr[k - 1][i - 1];
    }
    cout << i << "\n";
    return 0;
}