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
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> bc1, bc2;
        int c = 0;
        for(int i = 0; i < n; i++) {
            if(s1[i] == 'b') c++;
            if(s1[i] == 'a' || i == n - 1) {
                bc1.push_back(c);
                c = 0;
            }
        }
        if(s1[n - 1] == 'a') bc1.push_back(0);
        for(int i = 0; i < m; i++) {
            if(s2[i] == 'b') c++;
            if(s2[i] == 'a' || i == m - 1) {
                bc2.push_back(c);
                c = 0;
            }
        }
        if(s2[m - 1] == 'a') bc2.push_back(0);
        if(bc1.size() != bc2.size()) NO
        else if(bc1.size() == 0) YES
        else if(bc1[0] == bc2[0]) YES
        else NO
    }
    return 0;
}