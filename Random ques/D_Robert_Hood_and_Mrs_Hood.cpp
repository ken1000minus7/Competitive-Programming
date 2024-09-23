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
    int t;
    cin >> t;
    while(t--) {
        int n, d, k;
        cin >> n >> d >> k;
        set<int> s;
        vector<vector<int>> over(n, vector<int>());
        vector<int> start(k), end(k);
        for(int i = 0; i < k; i++) {
            cin >> start[i] >> end[i];
            start[i]--, end[i]--;
            over[start[i]].push_back(i + 1);
            over[end[i]].push_back(-i - 1);
        }

        int mother = 0, brother = 0;
        for(int i = 0; i < d; i++) for(auto j : over[i]) if(j > 0) s.insert(j);
        int mini = s.size();
        int maxi = s.size();
        for(int i = d; i < n; i++) {
            for(auto j : over[i - d]) if(j < 0) s.erase(-j);
            for(auto j : over[i]) if(j > 0) s.insert(j);
            int cmaxi = s.size();
            if(cmaxi < mini) {
                mini = cmaxi;
                mother = i - d + 1;
            }
            if(cmaxi > maxi) {
                maxi = cmaxi;
                brother = i - d + 1;
            }
        }
        brother++, mother++;
        cout << brother << " " << mother << "\n";

    }
    return 0;
}