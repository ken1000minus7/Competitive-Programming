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
    vector<vector<int>> arr(n);
    for(int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--, b--, g--;
        arr[i] = {a, b, g};
    }
    int ans = 0;
    for(int k = 0; k < 3; k++) {
        vector<int> shell(3);
        shell[k] = 1;
        int score = 0;
        for(int i = 0; i < n; i++) {
            swap(shell[arr[i][0]], shell[arr[i][1]]);
            if(shell[arr[i][2]]) score++;
        }
        ans = max(ans, score);
    }
    cout << ans << "\n";
    return 0;
}