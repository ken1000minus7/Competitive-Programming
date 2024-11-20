#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<pair<int, int>> b;
        vector<int> freq(200001);
        int maxi = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            maxi = max(maxi, a[i]);
        }
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            maxi = max(maxi, x);
            b.push_back({x, i});
        }
        if(freq[maxi] == 1) {
            YES
            continue;
        }
        sort(all(b), [&](auto p1, auto p2) {
            return a[p1.second] < a[p2.second];
        });
        sort(all(a));
        if(max(a[n - 1], b[n - 1].first) != max(a[n - 2], b[n - 2].first) || max(a[n - 1], b[n - 1].first) != maxi) {
            YES
        }
        else NO
    }
    return 0;
}