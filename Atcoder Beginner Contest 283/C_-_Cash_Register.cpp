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
    string s;
    cin >> s;
    int c = 0;
    int ans = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '0') ans++;
        if(s[i] == '0') c++;
        if(i == s.length() - 1 || s[i] != '0') {
            ans += c / 2;
            if(c % 2 != 0) ans++;
            c = 0;
        }
    }
    cout << ans << "\n";
    return 0;
}