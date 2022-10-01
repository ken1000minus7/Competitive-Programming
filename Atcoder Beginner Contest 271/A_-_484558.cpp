#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;

int main()
{
    FIO
    int n;
    cin>>n;
    int st = n%16;
    string ans = "";
    if(st<10) ans += to_string(st);
    else {
        char c = 'A' + st - 10;
        ans += c;
    }
    n/=16;
    st = n%16;
    if(st<10) ans = to_string(st) + ans;
    else {
        char c = 'A' + st - 10;
        ans = c + ans;
    }
    cout<<ans<<"\n";
    return 0;
}