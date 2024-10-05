#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;

int main()
{
    // freopen("prime_subtractorization_input.txt", "r", stdin);
    // freopen("aoutput.txt", "w", stdout);
    FIO
    vector<bool> primes(10000001, true);
    primes[0] = primes[1] = false;

    for (int p = 2; p * p <= 10000000; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= 10000000; i += p) {
                primes[i] = false;
            }
        }
    }

    vector<int> prime_numbers;
    for (int p = 2; p <= 10000000; p++) {
        if (primes[p]) {
            prime_numbers.push_back(p);
        }
    }
    int t;
    cin >> t;
    for(int _ = 1; _ <= t; _++) {
        int n;
        cin >> n;
        cout << "Case #" << _ << ": ";
        if(n < 5) {
            cout << 0 << "\n";
            continue;
        }
        int ans = 0;
        for(int i = 0; i < prime_numbers.size() && prime_numbers[i] <= n; i++) {
            if(prime_numbers[i] == 2 || prime_numbers[i] == 3 || (prime_numbers[i] + 2 <= n && prime_numbers[i] + 2 == prime_numbers[i + 1])) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}