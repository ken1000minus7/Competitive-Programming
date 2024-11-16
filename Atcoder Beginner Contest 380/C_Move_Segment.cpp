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
    vector<pair<int, int>> arr;
    int n, k;
    cin >> n >> k;
    int c = 0;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++) {
        c++;
        if(i == n - 1 || s[i] != s[i + 1]) {
            arr.push_back({s[i] - '0', c});
            c = 0;
        }
    }
    int kminusi = 0, ki = 0;
    c = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i].first == 0) continue;
        c++;
        if(c == k - 1) {
            kminusi = i;
        }
        else if(c == k) {
            ki = i;
        }
    }
    swap(arr[ki], arr[kminusi + 1]);
    for(auto p : arr) {
        for(int i = 0; i < p.second; i++) {
            cout << p.first;
        }
    }
    cout << "\n";
    return 0;
}