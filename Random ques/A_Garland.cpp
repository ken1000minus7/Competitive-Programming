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
        string s;
        cin >> s;
        vector<int> freq(10);
        int mfreq = 0;
        int unq = 0;
        for(char c : s) {
            if(freq[c - '0'] == 0) unq++;
            freq[c - '0']++;
            mfreq = max(mfreq, freq[c - '0']);
        } 
        if(unq == 1) {
            cout << -1 << "\n";
        }
        else if(unq >= 3) {
            cout << 4 << "\n";
        }
        else {
            if(mfreq == 2) cout << 4 << "\n";
            else cout << 6 << "\n";
        }
    }
    return 0;
}