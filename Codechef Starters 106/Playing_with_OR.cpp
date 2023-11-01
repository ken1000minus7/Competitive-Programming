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
        int n, k;
        cin >> n >> k;
        vector<int> eve(n), arr(n);
        int eves = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            eves += (arr[i] % 2) != 0;
            eve[i] = eves;
        }
        int ans = 0;
        for(int i = 0; i + k <= n; i++) {
            int c = eve[i + k - 1] - eve[i] + (arr[i] % 2 != 0);
            if(c > 0) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}