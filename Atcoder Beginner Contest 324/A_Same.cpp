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
    int n;
    cin >> n;
    vector<int> arr(n);
    bool op = true;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i > 0 && arr[i] != arr[i - 1]) op = false;
    }
    if(op) YES
    else NO
    return 0;
}