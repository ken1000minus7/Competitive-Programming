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
        ll num = 0;
        for(int i = 0; i < min(3, n); i++) {
            num += pow(10, i) * (s[n - i - 1] - '0');
        }

        ll ans = num;
        ll c = INT32_MAX;
        for(int i = (n == 3); i < 10; i++) {
            for(int j = (n == 2); j < 10; j++) {
                for(int k = (n == 1); k < 10; k++) {
                    ll creq = (i != num / 100) + (j != ((num / 10) % 10)) + (k != (num % 10));
                    ll cnum = i * 100 + j * 10 + k;
                    if(creq < c && cnum % 8 == 0) {
                        ans = cnum;
                        c = creq;
                    }
                }
            }
        }
        if(n > 3) {
            string fans = to_string(ans);
            if(fans.length() < 3) fans = "0" + fans;
            if(fans.length() < 3) fans = "0" + fans;
            cout << s.substr(0, n - 3) + fans << "\n";
        }
        else {
            cout << ans << "\n";
        }

    }
    return 0;
}