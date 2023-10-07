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
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int ct = 0;
        for(char c: s) {
            if(c == 'o') ct++;
        }
        arr.push_back({-ct, i + 1});
    }
    sort(all(arr));
    for(int i = 0; i < n; i++) {
        cout << arr[i].second << " ";
    }
    cout << "\n";
    return 0;
}