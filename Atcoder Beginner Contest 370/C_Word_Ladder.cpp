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
    string s, t;
    cin >> s >> t;
    int n = s.length();
    vector<char> arr(n);
    for(int i = 0; i < n; i++) arr[i] = s[i];
    vector<string> ans;
    while(s != t) {
        bool done = false;
        for(int i = 0; i < n; i++) {
            if(arr[i] > t[i]) {
                done = true;
                arr[i] = t[i];
                break;
            }
        }
        if(!done) {
            for(int i = n - 1; i >= 0; i--) {
                if(arr[i] != t[i]) {
                    arr[i] = t[i];
                    break;
                }
            }
        }
        s = "";
        for(char c : arr) s += c;
        ans.push_back(s);
    }
    cout << ans.size() << "\n";
    for(auto f : ans) cout << f << "\n";
    return 0;
}