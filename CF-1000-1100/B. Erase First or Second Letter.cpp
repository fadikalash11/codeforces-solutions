

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lld = long double;
const ll Mod=1e9+7;
const int INF=1e9;

ll factorial(ll x) {
    ll res = 1;
    for (ll i = 2; i <= x; i++) res *= i;
    return res;
}
// d عدد مرات ظهور
ll count_divisors(ll l, ll r, ll d) {
    return r / d - (l - 1) / d;
}
/// is n&1 number is odd  ??

ll modpow(ll base,ll n,ll mod)
{
ll re =1;
while(n>0)
{

    if(n&1)re=(re*base)%mod;
        n>>=1;
    base=(base*base)%mod;
}
return re;
}

string  findsmally(ll x)
{

    string stx =to_string(x);
    ll  stxlen=stx.length();
    ll p =pow(10,stxlen);

    bool  checkones=true;
    if(stx[0]!=1)
        checkones=false;
        else
        {
        for (int i =1;i<stxlen;++i)
        {
        if(stx[0]!=0)
        {
            checkones=false;

            break;
        }

        }
        if(checkones)
            cout<<"-1"<<endl;

        }

    if(to_string(p)<stx)
        return to_string(p);
    else
    {
        cout<<"-1";
    }



}


void solve(){


ll n;
cin>>n;
string s ;
cin>>s;

  set<char> st;
  ll ans=0;
  for(char c :s )
  {
    st.insert(c);
  //  cout<<"size is "<<st.size()<<endl;
    ans+=st.size();
  }

  cout<<ans<<endl;



/*
map<char,ll>mp;
vector<ll>ans(n,0);
ll  k=0;
for (int i =0;i<n;++i)
{
    mp[s[i]]++;
    cout<<mp[s[i]]<<endl;
    if(mp[s[i]]==1)k++;
    ans[i]=k;
}

for(int i =0;i<ans.size();++i)
cout<<ans[i]
<<endl;*/



}





int main(){
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











