#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;

int main()
{
    FIO
    int x,y,z;
    cin>>x>>y>>z;
    if(x>0 == y>0 && abs(x)>abs(y)) {
        if(z>0 == y>0 && abs(z) > abs(y)) {
            cout<<-1<<"\n";
        } 
        else {
            if(z>0 == x>0) {
                cout<<abs(x)<<"\n";
            }
            else {
                cout<<(abs(x) + 2*abs(z)) <<"\n";
            }
        }
    }
    else {
        cout<<abs(x)<<"\n";
    }
    return 0;
}