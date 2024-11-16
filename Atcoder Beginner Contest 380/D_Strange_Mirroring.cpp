#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

char flipCase(char c) {
    if (std::islower(c)) {
        return std::toupper(c);
    } else if (std::isupper(c)) {
        return std::tolower(c);
    }
    return c;
}

int main()
{
    FIO
    string s;
    cin >> s;
    int q;
    cin >> q;
    
    int n = s.length();
    ll a = n;
    vector<ll> lens = {a};
    do {
        a *= 2;
        lens.push_back(a);
    } while(1000000000000000000 / a >= 1);

    while(q--) {
        cin >> a;
        int flip = 0;
        while(a > n) {
            int it = lower_bound(all(lens), a) - lens.begin();
            ll back = it > 0 ? lens[it - 1] : 0;
            a -= back;
            flip = (flip + 1) % 2;
        }
        char ans = flip ? flipCase(s[a - 1]) : s[a - 1];
        cout << ans << " ";
    }
    return 0;
}