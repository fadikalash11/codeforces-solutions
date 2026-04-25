
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll = long long;


    //  __builtin_popcount(n)    number of bits only one

    void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    int M = sorted_a[n / 2];

    vector<int> preg(n + 1, 0);
    vector<int> prelf(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        preg[i + 1] = preg[i] + (a[i] >= M ? 1 : -1);
        prelf[i + 1] = prelf[i] + (a[i] <= M ? 1 : -1);
    }

    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if ((i - j) % 2 != 0) {
                if (dp[j] != -1) {
                    bool condition1 = (preg[i] - preg[j] > 0);
                    bool condition2 = (prelf[i] - prelf[j] > 0);

                    if (condition1 && condition2) {
                        dp[i] = max(dp[i], dp[j] + 1);
                    }
                }
            }
        }
    }

    cout << dp[n] << "\n";
}

    signed main()
           {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

int t;
cin>>t;
while(t--)
{
            solve();


}







        return 0;
    }
