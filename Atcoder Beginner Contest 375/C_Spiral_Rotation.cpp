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
    int n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < n; j++) {
            arr[i][j] = s[j];
        }
    }
    int k = 1;
    for(int s = 0; s < n / 2; s++) {
        if(k == 0) {
            k++;
            continue;
        }
        vector<char> tr;
        for(int j = s; j < n - s; j++) {
            tr.push_back(arr[s][j]);
        }

        vector<char> rc;
        for(int i = s; i < n - s; i++) {
            rc.push_back(arr[i][n - s - 1]);
        }

        vector<char> br;
        for(int j = n - s - 1; j >= s; j--) {
            br.push_back(arr[n - s - 1][j]);
        }

        vector<char> lc;
        for(int i = n - s - 1; i >= s; i--) {
            lc.push_back(arr[i][s]);
        }

        vector<vector<char>> stuff = {tr, rc, br, lc};
        rotate(stuff.begin(), stuff.begin() + 4 - k, stuff.end());

        // cout << "lol\n";
        // for(auto v : stuff) {
        //     for(auto a : v) {
        //         cout << a;
        //     }
        //     cout << "\n";
        // }
        // cout << "lole\n";

        int o = 0;
        for(int j = s; j < n - s; j++) {
            arr[s][j] = stuff[0][o++];
        }

        o = 0;
        for(int i = s; i < n - s; i++) {
            arr[i][n - s - 1] = stuff[1][o++];
        }

        o = 0;
        for(int j = n - s - 1; j >= s; j--) {
            arr[n - s - 1][j] = stuff[2][o++];
        }

        o = 0;
        for(int i = n - s - 1; i >= s; i--) {
            arr[i][s] = stuff[3][o++];
        }
        k = (k + 1) % 4;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}