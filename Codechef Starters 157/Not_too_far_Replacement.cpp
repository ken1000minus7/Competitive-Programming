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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll sum = 0;
        set<ll> s;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            s.insert(arr[i]);
        }
        ll last;
        cin >> last;
        sum += last;
        while(true) {
            auto it = s.upper_bound(2 * last);
            if(it == s.begin()) break;
            auto val = *prev(it);
            if(val <= last) break;
            s.insert(last);
            last = val;
            s.erase(val);
        }
        cout << (sum - last) << "\n";
    }
    return 0;
}