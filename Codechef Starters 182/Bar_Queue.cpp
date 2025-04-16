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
        string s;
        cin >> s;
        int b = 0, g = 0;
        int ans = n;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') b++;
            else g++;
            if(b > 2 * g) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}