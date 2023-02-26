#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using namespace std;

int main()
{
    FIO
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<pair<int, int>> ss;
    ss.insert({0, 0});
    int x = 0, y = 0;
    bool op = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') x++;
        else if(s[i] == 'L') x--;
        else if(s[i] == 'U') y++;
        else y--;
        if(ss.count({x, y})) {
            op = true;
            break;
        }
        ss.insert({x, y});
    }
    if(op) YES
    else NO
    return 0;
}