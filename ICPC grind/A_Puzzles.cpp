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
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    int ans = 1000;
    for(int i = 0; i + n - 1 < m; i++) {
        ans = min(ans, arr[i + n - 1] - arr[i]);
    }
    cout << ans << "\n";
    return 0;
}