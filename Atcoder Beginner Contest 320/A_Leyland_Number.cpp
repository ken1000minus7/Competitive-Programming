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
    ll a, b;
    cin >> a >> b;
    ll s1 = 1;
    for(int i = 1; i <= b; i++) {
        s1 *= a;
    }
    ll s2 = 1;
    for(int i = 1; i <= a; i++) {
        s2 *= b;
    }
    cout << (s1 + s2) << "\n";
    return 0;
}