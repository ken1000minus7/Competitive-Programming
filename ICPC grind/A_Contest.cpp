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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = max(3 * a / 10, a - (a / 250) * c);
    int v = max(3 * b / 10, b - (b / 250) * d);
    if(m > v) {
        cout << "Misha\n";
    }
    else if(m < v) {
        cout << "Vasya\n";
    }
    else {
        cout << "Tie\n";
    }
    return 0;
}