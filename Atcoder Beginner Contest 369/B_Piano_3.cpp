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
    vector<int> left, right;
    for(int i = 0; i < n; i++) {
        int a;
        char s;
        cin >> a >> s;
        if(s == 'L') left.push_back(a);
        else right.push_back(a);
    }
    int ans = 0;
    for(int i = 1; i < left.size(); i++) {
        ans += abs(left[i] - left[i - 1]);
    }
    for(int i = 1; i < right.size(); i++) {
        ans += abs(right[i] - right[i - 1]);
    }
    cout << ans << "\n";
    return 0;
}