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
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> freq(26);
    for(int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }
    string ans = "";
    bool op = true;
    for(char i = 'a'; i <= 'z'; i++) {
        if(freq[i - 'a'] % k != 0) {
            cout << -1 << "\n";
            op = false;
            break;
        }
        else {
            for(int j = 0; j < freq[i - 'a'] / k; j++) {
                ans += i;
            }
        }
    }
    if(op) {
        string fans = "";
        for(int i = 1; i <= k; i++) {
            fans += ans;
        }
        cout << fans << "\n";
    }
    return 0;
}