#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"-1\n";
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
        long double d, h;
        cin >> d >> h;
        vector<long double> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(all(arr));
        auto area = [&](long double base, long double height) {
            return (base * height) / 2;
        };
        long double ans = area(d, h);
        for(int i = n - 2; i >= 0; i--) {
            ans += area(d, h);
            if(arr[i] + h > arr[i + 1]) {
                long double sh = arr[i] + h - arr[i + 1];
                long double sb = (d * sh) / h;
                ans -= area(sb, sh);
            }
            // cout << ans << " lol\n";
        } 
        cout << fixed << setprecision(7) << ans << "\n";
    }
    return 0;
}