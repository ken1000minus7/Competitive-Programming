#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> arr(n);
        bool alleq = true;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] != k) alleq = false;
        }
        if(alleq) {
            cout << 0 << "\n";
            continue;
        }
        alleq = true;
        for(int i = 0; i < n; i++) {
            if(gcd(arr[i], k) != k) alleq = false;
        }
        if(alleq) {
            cout << 1 << "\n";
            continue;
        }
        int s = 0, e = n - 1;
        while(s < n && arr[s] == k) s++;
        while(e >= 0 && arr[e] == k) e--;
        alleq = true;
        for(int i = s + 1; i <= e; i++) {
            if((arr[i] ^ k) != (arr[i - 1] ^ k)) alleq = false;
        }
        if(alleq) {
            cout << 1 << "\n";
            continue;
        }
        cout << 2 << "\n";
    }
    return 0;
}