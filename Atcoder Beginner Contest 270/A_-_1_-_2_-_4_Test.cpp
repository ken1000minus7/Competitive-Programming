#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;

int main()
{
    FIO
    int a,b; 
    cin>>a>>b;
    int ans = 0;
    if((a==1 || a==3 || a==5 || a==7) || (b==1 || b==3 || b==5 || b==7)) ans++;
    if((a==2 || a==3 || a==6 || a==7) || (b==2 || b==3 || b==6 || b==7)) ans+=2;
    if((a==4 || a==6 || a==5 || a==7) || (b==4 || b==6 || b==5 || b==7)) ans+=4;
    cout<<ans<<"\n";
    return 0;
}