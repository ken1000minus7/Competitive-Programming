#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

int main()
{
    FIO
    string s;
    cin >> s;
    if(s.length() >= 3 && s.substr(s.length() - 3) == "san") YES
    else NO
    return 0;
}