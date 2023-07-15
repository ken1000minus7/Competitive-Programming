#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

int main()
{
    FIO
    int n;
    cin >> n;
    vector<string> arr(n);
    set<string> done;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        string s = arr[i];
        reverse(all(s));
        if(!done.count(arr[i]) && !done.count(s)) {
            ans++;
            done.insert(arr[i]);
            done.insert(s);
        }
    }
    cout << (ans) << "\n";
    return 0;
}