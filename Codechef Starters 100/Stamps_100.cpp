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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int i = 0;
        while(i < n) {
            if(s[i] == '1' && i + 2 < n) {
                ans += "1";
                i++;
                while(i < n) {
                    ans += "0";
                    i++;
                }
            }
            else {
                ans += s[i];
                i++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}