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
    string ab, ac, bc;
    cin >> ab >> ac >> bc;
    if(ab != ac) {
        cout << "A\n";
    }
    else if(ab == bc) {
        cout << "B\n";
    }
    else {
        cout << "C\n";
    }
    return 0;
}