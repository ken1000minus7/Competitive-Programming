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
        int curr = 0;
        int diff = 1;
        for(char c : s) {
            if(c == 'R') diff = (diff == 1) ? -1 : 1; 
            if(c == 'S') curr = (curr + 2 * diff + n) % n;
            else curr = (curr + diff + n) % n;
        }
        cout << curr + 1 << "\n";
    }
    return 0;
}