#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

int main()
{
    FIO
    int n, m;
    cin >> n >> m;
    vector<int> done(n);
    while(m--) {
        int i;
        string s;
        cin >> i >> s;
        i--;
        if(done[i] || s == "F") NO
        else {
            YES
            done[i]++;
        }
    }
    return 0;
}