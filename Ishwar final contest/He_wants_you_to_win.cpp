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
    vector<vector<int>> poss = {
        {2, 3, 1},
        {3, 1, 2}
    };
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(poss[0][a - 1] == b) ans1++;
        if(poss[1][a - 1] == b) ans2++;
    }
    cout << max(ans1, ans2) << "\n";
    return 0;
}