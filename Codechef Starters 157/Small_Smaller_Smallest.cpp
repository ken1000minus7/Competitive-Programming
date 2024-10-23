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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int o = 0, z = 0;
        for(char c : s) {
            if(c == '0') z++;
            else o++;
        }
        if(o == 0) cout << z << "\n";
        else if(o % 2 == 1) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}