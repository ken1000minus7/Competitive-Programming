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
    int n;
    cin >> n;
    string ans = "L";
    for(int i = 0 ; i < n; i++) ans += "o";
    ans += "ng";
    cout << ans << "\n";
    return 0;
}