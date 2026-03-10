
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

string s1,s2;
cin>>s1;
cin>>s2;
for(int i =0;i<s1.size();++i)
{
    if(int ((s1[i]))>=65  && int (s1[i])<=90)
    {
        s1[i]=int(s1[i])+32;


    }}
    for (int i =0;i<s1.size();++i)
    {

     if (int ( s2[i])>=65 && int (s2[i])<=90)
    {
    s2[i]=int(s2[i])+32;
    }
    }




for (int i =0;i<s1.size();++i)
{
    if(s1.compare(s2)==0)
    {cout<<0<<endl;
    return;
    }

else if (s1.compare(s2)>0){cout<<1<<endl;
return;
}
else
{cout<<-1<<endl;
return;
}

}

}
    int main()
           {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);


            solve();








        return 0;
    }






























