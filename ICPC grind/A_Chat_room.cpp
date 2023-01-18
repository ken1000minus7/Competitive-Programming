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
    string s;
    cin >> s;
    string req = "hello";
    int j = 0;
    for(int i = 0; i < s.length(); i++) {
        if(j < 5 && s[i] == req[j]) j++;
    }
    if(j == 5) YES
    else NO
    return 0;
}