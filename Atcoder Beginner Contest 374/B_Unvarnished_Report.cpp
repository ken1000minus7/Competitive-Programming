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
    string s, t;
    cin >> s >> t;
    if(s == t) {
        cout << 0 << "\n";
        return 0;
    }
    int i = 0;
    while(i < s.length() && i < t.length() && s[i] == t[i]) i++;
    cout << (i + 1) << "\n";
    return 0;
}