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
        ll n;
        cin >> n;
        ll end = (n / 11);
        ll start = ((10 * n + 110) / 111);
        if(start <= end) YES
        else NO
    }
    return 0;
}