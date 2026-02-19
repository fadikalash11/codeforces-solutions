    #include <bits/stdc++.h>
    #define mod 1000000007
    using namespace std;
    using ll = long long;
    //  __builtin_popcount(n)    number of bits only one
    ll expo(ll n, ll m)
    {
        ll ans = 1;
        while (m > 0)
        {

            if (m & 1)
            {
                ans = (ans % mod * n % mod) % mod;
            }
            n = (n % mod * n % mod) % mod;
            m >>= 1;
        }
        return ans % mod;
    }

    ll mul(ll x, ll y)
    {
        return (x % mod * y % mod) % mod;
    }

    bool isPrime(ll x)
    {
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0) return false;
        return true;
    }

void solve() {
    int n;
    cin >> n;
    int a[n];
    bool found = false;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int mask = 1; mask < (1 << n); ++mask) {
        ll product = 1;

        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                product *= a[i];
            }
        }

        if (product == 67) {
            found = true;
            break;
        }
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    int main()
           {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
int t ;
cin>>t;
while(t--)
{

            solve();

}






        return 0;
    }



