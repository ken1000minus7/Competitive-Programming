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
    string s;
    cin >> s;
    set<string> ss = { "ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    if(ss.count(s)) YES
    else NO
    return 0;
}