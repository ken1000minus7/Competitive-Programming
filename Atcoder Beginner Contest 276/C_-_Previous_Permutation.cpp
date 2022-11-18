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
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] > arr[i + 1]) {
            int ind = lower_bound(i + 1 + all(arr), arr[i]) - arr.begin() - 1;
            swap(arr[i],arr[ind]);
            reverse(i + 1 + all(arr));
            break;
        }
        if(i == 0) {
            reverse(all(arr));
        }
    }
    for(int a: arr) {
        cout << a << " ";
    }
    cout << "\n";
    return 0;
}