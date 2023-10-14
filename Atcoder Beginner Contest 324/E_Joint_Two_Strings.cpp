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
    string t;
    cin >> t;
    vector<string> arr(n);
    vector<int> breach;
    vector<int> freach(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        int j = -1;
        for(int k = 0; k < arr[i].length() && j + 1 < t.length(); k++) {
            if(arr[i][k] == t[j + 1]) j++;
        }
        freach[i] = j;
        j = t.length();
        for(int k = arr[i].length() - 1; k >= 0 && j > 0; k--) {
            if(arr[i][k] == t[j - 1]) j--;
        }
        breach.push_back(j);
    }
    sort(all(breach));
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll poss = upper_bound(all(breach), freach[i] + 1) - breach.begin();
        ans += poss;
    }
    cout << ans << "\n";
    return 0;
}