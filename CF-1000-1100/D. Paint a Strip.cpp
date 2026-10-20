#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;
        long long cap = 0;

        while (cap < n) {
            ans++;
            if (ans == 1) {
                cap = 1;
            } else {
                cap = 2 * cap + 2;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
