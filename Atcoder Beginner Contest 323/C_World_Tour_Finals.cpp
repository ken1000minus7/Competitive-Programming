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
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    vector<int> score;
    vector<string> prob;
    int maxi = 0;
    int mc = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int ct = 0;
        for(int j = 0; j < m; j++) {
            if(s[j] == 'o') ct += arr[j];
        }
        score.push_back(ct + i + 1);
        if(score[i] > maxi) {
            maxi = score[i];
            mc = 1;
        }
        else if(score[i] == maxi) mc++;
        prob.push_back(s);
    }
    for(int i = 0; i < n; i++) {
        int ans = 0;
        int c = score[i];
        if(c == maxi && mc <= 1) {
            cout << 0 << "\n";
            continue;
        } 
        priority_queue<int> pq;
        for(int j = 0; j < m; j++) {
            if(prob[i][j] == 'x') pq.push(arr[j]);
        }
        while(!pq.empty() && c <= maxi) {
            c += pq.top();
            pq.pop();
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}