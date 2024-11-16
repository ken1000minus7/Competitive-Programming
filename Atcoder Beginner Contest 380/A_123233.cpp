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
    int oc = 0, tc = 0, thc = 0;
    for(char c : s) {
        if(c == '1') oc++;
        else if(c == '2') tc++;
        else if(c == '3') thc++;
    }
    if(oc == 1 && tc == 2 && thc == 3) YES
    else NO
    return 0;
}