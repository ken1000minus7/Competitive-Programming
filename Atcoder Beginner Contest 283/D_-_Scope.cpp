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
    string s;
    cin >> s;
    vector<int> pres(26, -1);
    stack<int> inds;
    bool op = true;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            inds.push(i);
        }
        else if(s[i] == ')') {
            for(int j = 0; j < 26; j++) {
                if(pres[j] > inds.top()) {
                    pres[j] = -1;
                }
            }
            inds.pop();
        }
        else {
            if(pres[s[i] - 'a'] == -1) {
                pres[s[i] - 'a'] = i;
            }
            else {
                op = false;
                break;
            }
        }
    }

    if(op) YES
    else NO
    return 0;
}