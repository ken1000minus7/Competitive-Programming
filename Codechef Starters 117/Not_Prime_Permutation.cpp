#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

set<int> sievy() {
    int n = 100002;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    set<int> ans;
    for(int i = 0; i <= n; i++) {
        if(is_prime[i]) ans.insert(i);
    }
    return ans;
}

int main()
{
    FIO
    int t;
    cin >> t;
    set<int> ss = sievy();
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int oind, tind;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == 1) oind = i;
            if(arr[i] == 3) tind = i;
        }
        if(n > 2) {
            swap(arr[oind], arr[tind]);
            for(int a : arr) cout << a << " ";
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}