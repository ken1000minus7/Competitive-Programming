#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using namespace std;

int main()
{
    FIO
    vector<vector<int>> arr(9, vector<int>(9));
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }
    bool op = true;

    for(int i = 0; i < 9; i++) {
        set<int> s;
        for(int j = 0; j < 9; j++) {
            s.insert(arr[i][j]);
        }
        if(s.size() != 9) {
            op = false;
            break;
        }
    } 

    for(int j = 0; j < 9; j++) {
        set<int> s;
        for(int i = 0; i < 9; i++) {
            s.insert(arr[i][j]);
        }
        if(s.size() != 9) {
            op = false;
            break;
        }
    } 

    for(int si = 0; si < 9; si += 3) {
        for(int sj = 0; sj < 9; sj += 3) {
            set<int> s;
            for(int i = si; i < si + 3; i++) {
                for(int j = sj; j < sj + 3; j++) {
                    s.insert(arr[i][j]);
                }
            }
            if(s.size() != 9) {
                op = false;
                break;
            }
        }
    }

    if(op) YES
    else NO
    return 0;
}