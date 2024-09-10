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
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> lind(200001, -1);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        lind[arr[i]] = i;
    }
    int i = 0;
    ll ans = 0;
    vector<ll> freq(200001);
    while(i < n) {
        ll count = 1;
        ll li = lind[arr[i]];
        int j = i + 1;
        freq[arr[i]]++;
        ll mfreq = 1;
        while(j <= li) {
            li = max(li, lind[arr[j]]);
            freq[arr[j]]++;
            mfreq = max(mfreq, freq[arr[j]]);
            // cout << arr[j] << " : " << mfreq << " vs " << freq[arr[j]] << "\n";
            count++;
            j++;
        } 
        // cout << "range: " << i << " " << j << "\n";
        // cout << "mfreq " << mfreq << "\n";
        ans += count - mfreq;
        i = j;
    }
    cout << ans << "\n";
    return 0;
}
