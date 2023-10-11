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
        ll a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        vector<ll> arr1 = {a1, a2, a3};
        vector<ll> arr2 = {b1, b2, b3};
        sort(all(arr1));
        sort(all(arr2));
        ll s1 = 100 * arr1[2] + 10 * arr1[1] + arr1[0];
        ll s2 = 100 * arr2[2] + 10 * arr2[1] + arr2[0];
        if(s1 < s2) cout << "Bob\n";
        else if(s1 > s2) cout << "Alice\n";
        else cout << "Tie\n";
    }
    return 0;
}