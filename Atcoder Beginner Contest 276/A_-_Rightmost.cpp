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
    int ans = -1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'a') ans = i + 1;
    }
    cout << ans << "\n";
    return 0;
}