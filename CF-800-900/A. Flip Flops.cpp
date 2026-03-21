
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll = long long;
    //  __builtin_popcount(n)    number of bits only one
void solve() {
    ll n, c, k;
    if (!(cin >> n >> c >> k)) return;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        if (a[i] > c) break;

        ll can_use = min(k, c - a[i]);

        c += (a[i] + can_use);

        k -= can_use;
    }

    cout << c << endl;
}

    int main()
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

