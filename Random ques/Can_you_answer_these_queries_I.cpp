#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;                                                                                          

class Node{
public:
    ll sum;
    ll bestPref;
    ll bestSuff;
    ll maxSub;

    Node()
    {
        sum = INT32_MIN;
        bestPref = INT32_MIN;
        bestSuff = INT32_MIN;
        maxSub = INT32_MIN;
    }
};

void buildTree(vector<ll> &arr,vector<Node*> &segTree,int l,int r,int ind)
{
    segTree[ind] = new Node();
    if(l==r)
    {
        segTree[ind]->bestPref = arr[l];
        segTree[ind]->bestSuff = arr[l];
        segTree[ind]->maxSub = arr[l];
        segTree[ind]->sum = arr[l];
        return;
    }
    int mid = l + (r-l)/2;
    buildTree(arr,segTree,l,mid,2*ind+1);
    buildTree(arr,segTree,mid+1,r,2*ind+2);
    Node* left = segTree[2*ind+1];
    Node* right = segTree[2*ind+2];
    segTree[ind]->sum = left->sum + right->sum;
    segTree[ind]->bestPref = max(left->bestPref,left->sum+right->bestPref);
    segTree[ind]->bestSuff = max(right->bestSuff,right->sum+left->bestSuff);
    segTree[ind]->maxSub = max(left->maxSub,max(right->maxSub,left->bestSuff+right->bestPref));
}

Node* query(vector<Node*> &segTree,int l,int r,int &s,int &e,int ind)
{
    if(l>=s && r<=e) return segTree[ind];
    else if(l>e || r<s) 
    {
        return new Node();
    }
    else
    {
        int mid = l + (r-l)/2;
        Node* left = query(segTree,l,mid,s,e,2*ind+1);
        Node* right = query(segTree,mid+1,r,s,e,2*ind+2);
        Node* ans = new Node();
        ans->sum = left->sum + right->sum;
        ans->bestPref = max(left->bestPref,left->sum+right->bestPref);
        ans->bestSuff = max(right->bestSuff,right->sum+left->bestSuff);
        ans->maxSub = max(left->maxSub,max(right->maxSub,left->bestSuff+right->bestPref));
        return ans;
    }
}

int main()
{
    FIO
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<Node*> segTree(4*n);
    buildTree(arr,segTree,0,n-1,0);
    int q;
    cin>>q;
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        i--,j--;
        cout<<query(segTree,0,n-1,i,j,0)->maxSub<<"\n";
    }
    return 0;
}