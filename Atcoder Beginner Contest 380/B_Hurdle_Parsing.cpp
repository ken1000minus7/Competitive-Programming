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
    string s;
    cin >> s;
    int a = 0;
    for(char c : s) {
        if(c == '|') {
            if(a > 0) cout << a << " ";
            a = 0;
        }
        else a++;
    }
    return 0;
}