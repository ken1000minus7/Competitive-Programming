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
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        ll sum = 0;
        int zc = 0;
        for(char c : s) {
            sum += c - '0';
            if(c == '0') zc++;
        }
        if(sum % 3 != 0) {
            NO
            continue;
        }
        if(zc >= 1) {
            YES
        } 
        else {
            NO
        }

    }
    return 0;
}