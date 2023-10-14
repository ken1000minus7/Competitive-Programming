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
    ll n;
    cin >> n;
    while(n % 3 == 0) n /= 3;
    while(n % 2 == 0) n /= 2;
    if(n == 1) YES
    else NO
    return 0;
}