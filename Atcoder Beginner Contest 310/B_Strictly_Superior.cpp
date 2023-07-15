#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using namespace std;

bool isop(int i, int j, vector<int> &price, vector<vector<int>> &func) {
    if(price[i] < price[j]) return false;
    int c = 0;
    for(int k = 0; k < func[0].size(); k++) {
        if(func[i][k] && !func[j][k]) return false;
        if(!func[i][k] && func[j][k]) c++;
    }
    // cout << price[i] << " " << price[j] << " " << c << "\n";
    return price[i] > price[j] || c > 0;
}

int main()
{
    FIO
    int n, m;
    cin >> n >> m;
    vector<int> price(n);
    vector<vector<int>> func(n, vector<int>(m + 1));
    for(int i = 0; i < n; i++) {
        cin >> price[i];
        int c;
        cin >> c;
        for(int j = 0; j < c; j++) {
            int a;
            cin >> a;
            func[i][a]++;
        }
    }
    // for(int i = 0; i < n; i++) {
    //     cout << price[i] << "\n";
    //     for(int j = 0; j < m + 1; j++) {
    //         cout << func[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    bool op = false;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            // cout << price[i] << " " << price[j] << "\n";
            if(isop(i, j, price, func) || isop(j, i, price, func)) {
                op = true;
                break;
            }
        }
    }
    if(op) YES
    else NO
    return 0;
}