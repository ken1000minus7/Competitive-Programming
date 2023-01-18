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
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }
        for(int j = 0; j <= i; j++) {
            cout << j;
            if(j != i || i != 0) {
                cout << " ";
            }
        }
        for(int j = i - 1; j >= 0; j--) {
            cout << j;
            if(j != 0) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }
        for(int j = 0; j <= i; j++) {
            cout << j;
            if(j != i || i != 0) {
                cout << " ";
            }
        }
        for(int j = i - 1; j >= 0; j--) {
            cout << j;
            if(j != 0) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}