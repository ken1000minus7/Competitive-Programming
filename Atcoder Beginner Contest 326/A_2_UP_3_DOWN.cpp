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
    int x, y;
    cin >> x >> y;
    if(x > y && x - y <= 3) YES
    else if(x < y && y - x <= 2) YES
    else NO
    return 0;
}