#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using namespace std;

bool checktak(int i, int j, vector<string> &arr) {
    for(int i1 = i; i1 < i + 3; i1++) {
        for(int j1 = j; j1 < j + 3; j1++) {
            if(arr[i1][j1] != '#') return false;
        }
    }
    for(int i1 = i + 6; i1 < i + 9; i1++) {
        for(int j1 = j + 6; j1 < j + 9; j1++) {
            if(arr[i1][j1] != '#') return false;
        }
    }
    for(int j1 = j; j1 <= j + 3; j1++) {
        if(arr[i + 3][j1] != '.') return false;
    }
    for(int i1 = i; i1 <= i + 3; i1++) {
        if(arr[i1][j + 3] != '.') return false;
    }
    for(int j1 = j + 5; j1 < j + 9; j1++) {
        if(arr[i + 5][j1] != '.') return false;
    }
    for(int i1 = i + 5; i1 < i + 9; i1++) {
        if(arr[i1][j + 5] != '.') return false;
    }
    return true;
}

int main()
{
    FIO
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];      
    }
    for(int i  = 0; i + 9 <= n; i++) {
        for(int j = 0; j + 9 <= m; j++) {
            if(checktak(i, j, arr)) {
                cout << (i + 1) << " " << (j + 1) << "\n";
            }
        }
    }
    return 0;
}