#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

bool check(string s, string &t) {
    if(s == t) return true;
    if(s.length() < t.length() - 1 || s.length() > t.length() + 1) return false;
    if(s.length() == t.length()) {
        int diff = 0;
        for(int i = 0; i < s.length(); i++) {
            diff += s[i] != t[i];
        }
        return diff <= 1;
    }
    bool done = false;
    string smol = s.length() < t.length() ? s : t;
    string big = s.length() < t.length() ? t : s;
    int j = 0;
    for(int i = 0; i < big.length() && j < smol.length(); i++) {
        if(big[i] == smol[j]) {
            j++;
            continue;
        }
        if(!done) {
            done = true;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    FIO
    int n;
    cin >> n;
    string t;
    cin >> t;
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if(check(s, t)) {
            ans.push_back(i);
        }
    }
    cout << ans.size() << "\n";
    for(int a: ans) {
        cout << a << " ";
    }
    cout << "\n";
    return 0;
}