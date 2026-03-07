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

    int n ;
    cin>>n;
string s;
cin>>s;

int countA=0;
int countD=0;
for (int i =0;i<s.size();++i)
{
    if(s[i]=='A')countA++;
    else countD++;


}
if(countA>countD)cout<<"Anton"<<endl;
else if (countD>countA)cout<<"Danik"<<endl;
else cout<<"Friendship";

}
    int main()
           {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);


            solve();








        return 0;
    }







