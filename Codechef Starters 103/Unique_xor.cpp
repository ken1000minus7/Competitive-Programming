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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int allz = 0;
        int allo = 0;
        bool oposs = true;
        for(int i = 0; i < k; i++) {
            int tot = 0;
            int ones = 0;
            for(int j = i; j < n; j += k) {
                if(s[j] == '1') ones++;
                tot++;
            }
            allz += ones / 2;
            if(ones % 2 != 0) {
                allz += 2;
            }
            if(ones == 0) oposs = false;
            if(!oposs) continue;
            allo += tot - ones;
        }
        if(oposs && allo < allz) cout << allo << "\n";
        else cout << allz << "\n";
    }
    return 0;
}