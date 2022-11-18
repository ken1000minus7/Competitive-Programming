#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    FIO
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll gc = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        gc = gcd(gc, arr[i]);
    }
    ll ops = 0;
    for(ll b: arr) {
        ll rem = b / gc;
        ll c = 0;
        while(rem % 3 == 0 || rem % 2 == 0) {
            if(rem % 2 == 0) {
                rem /= 2;
            }
            else {
                rem /= 3;
            }
            ops++;
        }
        if(rem > 1) {
            ops = -1;
            break;
        }
    }
    cout << ops << "\n";
    return 0;
}