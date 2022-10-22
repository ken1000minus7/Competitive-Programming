#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
using namespace std;

int main()
{
    FIO
    int n,m;
    cin >> n >> m;
    vector<string> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int j = 0; j < m; j++) {
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i][j] == '#') ans++;
        }
        cout << ans << " ";
    }
    cout << "\n";
    return 0;
}