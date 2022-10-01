#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;

int main()
{
    FIO
    int n,q;
    cin>>n>>q;
    vector<vector<ll>> seq;
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        vector<ll> temp(l);
        for(int j=0;j<l;j++) cin>>temp[j];
        seq.push_back(temp);
    }
    for(int i=0;i<q;i++)
    {
        int s,t;
        cin>>s>>t;
        cout<<seq[s-1][t-1]<<"\n";
    }
    return 0;
}