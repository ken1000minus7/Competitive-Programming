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
    int _;
    cin >> _;
    while(_--) {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        if(n > m) {
            swap(n, m);
            swap(s, t);
        }

        auto good = [&]() {
            int i = -1;
            while(i < n - 1 && s[i + 1] == t[i + 1]) i++;
            int j = n;
            int k = m;
            while(j > 0 && s[j - 1] == t[k - 1]) j--, k--;
            return j - i <= 1;
        };


        if(s == t) {
            cout << 0 << "\n";
        }
        else if(good() && t[0] == s[0]) {
            cout << 1 << "\n";
        }
        else if(t[0] == s[0]) {
            cout << 2 << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
    return 0;
}