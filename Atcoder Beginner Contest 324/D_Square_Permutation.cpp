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
    string s;
    cin >> s;
    vector<int> freq(10);
    for(char c: s) {
        freq[c - '0']++;
    }
    sort(all(s));
    ll st = sqrt(stoll(s));
    reverse(all(s));
    ll ed = stoll(s);
    ll ans = 0;
    for(ll i = st; i * i <= ed; i++) {
        string sq = to_string(i * i);
        vector<int> mfreq(10);
        for(char c: sq) {
            mfreq[c - '0']++;
        }
        bool op = true;
        for(int j = 1; j < 10; j++) {
            if(mfreq[j] != freq[j]) {
                op = false;
                break;
            }
        }
        if(op) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}