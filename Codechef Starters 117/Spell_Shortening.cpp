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
        int ind = n - 1;
        string ans = "";
        for(int i = 0; i < n - 1; i++) {
            if(s[i] > s[i + 1]) {
                ind = i;
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(i == ind) continue;
            ans += s[i];
        }
        cout << ans << "\n";
    }
    return 0;
}