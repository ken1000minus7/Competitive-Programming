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
    vector<ll> arr(n);
    set<int> s;
    for(int i=0;i<n;i++) cin>>arr[i], s.insert(arr[i]);
    ll read = 0;
    int j = 0;
    int done = 0;
    auto it = s.begin();
    for(int i=0;i<n;i++)
    {
        if(it!=s.end() && read+1==*it)
        {
            advance(it,1);
        }
        else
        {
            n--;
        }
        if(n>i) read++;
    }
    cout<<read<<"\n";
    return 0;
}