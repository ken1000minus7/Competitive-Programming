#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

void buildTree(vector<pair<ll, ll>> &arr,vector<pair<ll, ll>> &segTree,int l,int r,int ind)
{
    if(l==r)
    {
        segTree[ind] = {arr[l].second, l};
        return;
    }
    int mid = l + (r-l)/2;
    buildTree(arr,segTree,l,mid,2*ind + 1);
    buildTree(arr,segTree,mid+1,r,2*ind+2);
    auto p1 = segTree[2*ind+1];
    auto p2 = segTree[2*ind+2];
    if(p1.first > p2.first){
        segTree[ind] = p1;
    }
    else {
        segTree[ind] = p2;
    }
}

void update(vector<pair<ll, ll>> &arr, vector<pair<ll, ll>> &segTree,int l,int r,int ind,int i,int x)
{
    if(l==r)
    {
        segTree[ind] = {x, i};
        arr[i].second = x;
        return;
    }
    int mid = l + (r-l)/2;
    if(i<=mid) update(arr, segTree,l,mid,2*ind+1,i,x);
    else update(arr, segTree,mid+1,r,2*ind+2,i,x);
    auto p1 = segTree[2*ind+1];
    auto p2 = segTree[2*ind+2];
    if(p1.first > p2.first){
        segTree[ind] = p1;
    }
    else {
        segTree[ind] = p2;
    }
}

pair<ll, ll> query(vector<pair<ll, ll>> &segTree,int l,int r,int s,int &e,int ind)
{
    if(l>=s && r<=e) return segTree[ind];
    else if(l>e || r<s) return {0, -1};
    else 
    {
        int mid = l + (r-l)/2;
        auto p1 = query(segTree,l,mid,s,e,2*ind+1);
        auto p2 = query(segTree,mid+1,r,s,e,2*ind+2);
        if(p1.first > p2.first){
            return p1;
        }
        else {
            return p2;
        }
    }
}

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll k;
        cin >> k;
        vector<ll> h(n), e(n);
        vector<pair<ll, ll>> lol;
        multiset<pair<ll, ll>> s;
        for(int i = 0; i < n; i++) {
            cin >> h[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> e[i];
            lol.push_back({h[i], e[i]});
        }
        sort(all(lol));
        // for(auto a : lol) {
        //     cout << a.first << " " << a.second << " lol\n";
        // }
        vector<pair<ll, ll>> segtree(4 * n);
        vector<ll> energy;
        buildTree(lol, segtree, 0, n - 1, 0);
        for(int i = 0; i < n; i++) {
            pair<ll, ll> q = {k, INT32_MAX};
            int ind = upper_bound(all(lol), q) - lol.begin() - 1;
            if(ind == -1) break;
            auto p = query(segtree, 0, n - 1, 0, ind, 0);
            // cout << ind << " " << p.first << "\n";
            if(!p.first) break;
            k += p.first;
            update(lol, segtree, 0, n -1, 0, p.second, 0);
            energy.push_back(k);

        }
        cout << energy.size() << "\n";
        for(ll a : energy) {
            cout << a << " ";
        }
        cout << "\n";
    }
    return 0;
}