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
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    vector<pair<int, int>> arr = {{x1, y1}, {x2, y2}, {x3, y3}};
    bool done = false;
    for(int mask = 0; mask < 8; mask++) {
        vector<pair<int, int>> carr;
        for(int i = 0; i < 3; i++) {
            if(mask & (1 << i)) {
                carr.push_back({arr[i].second, arr[i].first});
            }
            else {
                carr.push_back(arr[i]);
            }
        }
        // same row or same col 
        if(carr[0].first == carr[1].first && carr[1].first == carr[2].first) {
            int sqlen = carr[0].second + carr[1].second + carr[2].second;
            if(sqlen == carr[0].first) {
                vector<pair<int, string>> stuff = {{carr[0].second, "A"}, {carr[1].second, "B"}, {carr[2].second, "C"}};
                cout << sqlen << "\n";
                for(auto p : stuff) {
                    for(int i = 0; i < p.first; i++) {
                        for(int j = 0; j < sqlen; j++) {
                            cout << p.second;
                        }
                        cout << "\n";
                    } 
                }
                done = true;
                break;
            }
        }
        vector<string> symbols = {"A", "B", "C"};
        for(int i = 0; i < 3 && !done; i++) {
            for(int j = i + 1; j < 3 && !done; j++) {
                if(carr[i].first != carr[j].first) continue;
                int k = 3 - i - j;
                if(carr[i].second + carr[j].second == carr[k].second) {
                    int sqlen = carr[i].second + carr[j].second;
                    if(sqlen == carr[i].first + carr[k].first) {
                        cout << sqlen << "\n";
                        for(int _ = 0; _ < carr[i].second; _++) {
                            for(int __ = 0; __ < carr[i].first; __++) {
                                cout << symbols[i];
                            }
                            for(int __ = 0; __ < carr[k].first; __++) {
                                cout << symbols[k];
                            }
                            cout << "\n";
                        }
                        for(int _ = 0; _ < carr[j].second; _++) {
                            for(int __ = 0; __ < carr[j].first; __++) {
                                cout << symbols[j];
                            }
                            for(int __ = 0; __ < carr[k].first; __++) {
                                cout << symbols[k];
                            }
                            cout << "\n";
                        }
                        done = true;
                        break;
                    }
                }
            }
        }
    }
    if(!done) cout << -1 << "\n";
}