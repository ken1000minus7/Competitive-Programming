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
    string s;
    cin >> s;
    vector<char> arr(n);
    for(int i = 0; i < n; i++) arr[i] = s[i];
    int q;
    cin >> q;
    bool upper = false;
    int lq = -2;
    vector<int> quer(n);
    for(int i = 0; i < q; i++) {
        int t, x;
        char c;
        cin >> t >> x >> c;
        x--;
        if(t == 1) {
            arr[x] = c;
            quer[x] = i;
        }
        else if(t == 2) {
            upper = false;
            lq = i;
        }
        else {
            upper = true;
            lq = i;
        }
    }
    string ans = "";
    for(int i = 0; i < n; i++) {
        if(quer[i] > lq) {
            ans += arr[i];
            continue;
        }
        if(upper && arr[i] >= 'a' && arr[i] <= 'z') ans += (arr[i] - 'a' + 'A');
        else if(!upper && arr[i] >= 'A' && arr[i] <= 'Z') ans += (arr[i] - 'A' + 'a');
        else ans += arr[i];
    }
    cout << ans << "\n";
    return 0;
}