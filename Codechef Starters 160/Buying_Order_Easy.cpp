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
        vector<int> arr(n);
        vector<int> oi, zi;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i]) oi.push_back(i);
            else zi.push_back(i);
        }
        int on = oi.size(), zn = zi.size();
        if(on == 0 || zn == 0 || zi[zn - 1] > oi[on - 1] || oi[0] < zi[0]) {
            cout << (2 * n - 1) << "\n";
            continue;
        }
        cout << (2 * n - 2) << "\n";
    }
    return 0;
}