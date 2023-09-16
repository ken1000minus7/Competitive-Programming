#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

bool pali(string s) {
    int i = 0, j = s.length() - 1;
    while(i < j) {
        if(s[i] != s[j]) return false;
        i++, j--;
    }
    return true;
}

int main()
{
    FIO
    string s;
    cin >> s;
    int ans = 1;
    for(int i = 0; i < s.length(); i++) {
        for(int j = 1; j < s.length() - i + 1; j++) {
            string ss = s.substr(i, j);
            if(pali(ss)) ans = max(ans, j);
        }
    }
    cout << ans << "\n";
    return 0;
}