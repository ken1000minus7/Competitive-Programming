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
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        for(auto c : s1) {
            if(c == '1') ans += 1;
            else if(c == '3') ans += 4;
            else if(c == '5') ans += 6;
            else ans += 9;
        }
        for(auto c : s2) {
            if(c == '1') ans -= 1;
            else if(c == '3') ans -= 4;
            else if(c == '5') ans -= 6;
            else ans -= 9;
        }
        cout << ans << "\n";
    }
    return 0;
}