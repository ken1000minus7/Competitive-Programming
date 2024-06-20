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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> ans;
        for(int i = 1; i <= n; i++) {
            ans.push_back(i);
        }
        int i = 0, j = n - 1;
        while(i < j) {
            swap(ans[i], ans[j]);
            i++, j--;
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}