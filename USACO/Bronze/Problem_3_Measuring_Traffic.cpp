#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

class sensy {
    public:
    int l, r;
    string category;

    sensy(string cat, int l, int r): category(cat), l(l), r(r) {}
};

int main()
{
    FIO
    int n;
    cin >> n;
    vector<sensy> arr;
    for(int i = 0; i < n; i++) {
        string st;
        cin >> st;
        int l, r; 
        cin >> l >> r;
        sensy s(st, l, r);
        arr.push_back(s);
    }
    int l1 = 0, r1 = 1000;
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i].category == "none") {
        l1 = max(l1, arr[i].l);
        r1 = min(r1, arr[i].r);
    }
    else if(arr[i].category == "on") {
        l1 = max(0, l1 - arr[i].r);
        r1 = max(0, r1 - arr[i].l);
    }
    else {
        l1 = l1 + arr[i].l;
        r1 = r1 + arr[i].r;
    }
    }
    
    cout << l1 << " " << r1 << "\n";

    int l2 = 0, r2 = 1000;
    for(int i = 0; i < n; i++) {
        if(arr[i].category == "none") {
            l2 = max(l2, arr[i].l);
            r2 = min(r2, arr[i].r);
        }
        else if(arr[i].category == "on") {
            l2 = l2 + arr[i].l;
            r2 = r2 + arr[i].r;
        }
        else {
            l2 = max(0, l2 - arr[i].r);
            r2 = max(0, r2 - arr[i].l);
        }
    }
    cout << l2 << " " << r2 << "\n";
    return 0;
}