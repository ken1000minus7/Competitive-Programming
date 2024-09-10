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
    vector<int> a(n), b(n), c(n);
    vector<vector<int>> indsb(n, vector<int>());
    vector<int> freqc(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        b[i]--;
        indsb[b[i]].push_back(i);
    }
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        c[i]--;
        freqc[c[i]]++;
    }
    vector<ll> bpc(n);
    for(int i = 0; i < n; i++) {
        for(int j : indsb[i]) {
            bpc[i] += freqc[j];
        }
        // cout << bpc[i] << " ";
    }
    // cout << "\n";
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += bpc[a[i]];
    }
    cout << ans << "\n";
    return 0;
}
