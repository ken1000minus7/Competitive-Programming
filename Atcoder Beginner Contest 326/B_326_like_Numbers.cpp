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
    int n;
    cin >> n;
    while(n < 1000) {
        int a = n / 100;
        int b = (n / 10) % 10;
        if((a * b) == (n % 10)) {
            cout << n << "\n";
            break;
        }
        n++;
    }
    return 0;
}