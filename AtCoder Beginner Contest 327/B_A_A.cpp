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
    vector<ll> arr = {1, 4, 27, 256, 3125, 46656, 823543, 16777216, 387420489, 10000000000, 285311670611, 8916100448256, 302875106592253, 11112006825558016, 437893890380859375};
    ll n;
    cin >> n;
    int ans = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(n == arr[i]) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}