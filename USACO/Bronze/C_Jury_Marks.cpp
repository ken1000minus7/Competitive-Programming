#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

 
int main()
{
    FIO
    int k, n;
    cin >> k >> n;
    vector<ll> a(k), b(n);
    vector<ll> prefa(k);
    for(int i = 0; i < k; i++) {
        cin >> a[i];
        prefa[i] = a[i];
        if(i > 0) prefa[i] += prefa[i - 1];
    } 
    for(int i = 0; i < n; i++) cin >> b[i];
    set<ll> ans;
    sort(all(prefa));
    sort(all(b));

    // for(auto p : prefa) cout << p << " ";
    // cout << "\n";
    // for(auto p : b) cout << p << " ";
    // cout << "\n";

    for(int i = 0; i + n - 1 < k; i++) {
        ll mans = b[0] - prefa[i];
        bool op = true;
        int prev = i;
        for(int j = 1; j < n; j++) {
            int ind = lower_bound(prev + 1 + all(prefa), b[j] - mans) - prefa.begin();
            // cout << i << " " << j << " " << ind << "\n";
            if(ind == k || prefa[ind] != b[j] - mans) {
                op = false;
                break;
            }
            prev = ind;
        }
        if(op) ans.insert(mans);
    }
    cout << ans.size() << "\n";
    return 0;
}