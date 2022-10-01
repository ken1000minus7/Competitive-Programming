#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
using namespace std;

pair<int,int> dostuff(int i,int sum,int &s,vector<vector<pair<int,int>>> &dp,vector<pair<int,int>> &arr)
{
    if(sum > s) return {0,-1};
    if(i>=dp.size())
    {
        if(sum==s) return {1,-1};
        else return {0,-1};
    }

    if(dp[i][sum].first != -1) return dp[i][sum];
    auto p1 = dostuff(i+1,sum+arr[i].first,s,dp,arr);
    if(p1.first==1) 
    {
        return dp[i][sum] = {1,0};
    }
    else 
    {
        auto p2 = dostuff(i+1,sum+arr[i].second,s,dp,arr);
        if(p2.first==1) return dp[i][sum] = {1,1};
        else return dp[i][sum] = {0,-1};
    }
}

int main()
{
    FIO
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    vector<vector<pair<int,int>>> dp(n,vector<pair<int,int>>(s+1,{-1,-1}));
    auto p = dostuff(0,0,s,dp,arr);
    if(p.first==1)
    {
        YES
        string ans = "";
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(dp[i][sum].second==0)
            {
                sum += arr[i].first;
                ans += "H";
            }
            else
            {
                sum += arr[i].second;
                ans += "T";
            }
        }
        cout<<ans<<"\n";
    }
    else NO
    return 0;
}