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
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        ll smallpov = (a < b) ? a : a - (a / b) * b;
        ll smolnev = smallpov - b;
        if(abs(smolnev) == abs(smallpov)) YES
        else NO
    }
    return 0;
}