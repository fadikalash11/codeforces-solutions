

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lld = long double;
const ll Mod=1e9+7;
const int INF=1e9;


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

ll n ;
cin>>n;
ll a[n];
for (int i =0;i<n;++i)cin>>a[i];


for (int i =0;i<n;++i){
if(a[i]>=1)cout<<a[i]<<" ";}

cout<<endl;
for (int i =0;i<n;++i){

 if(a[i]<1 && a[i]!=0)cout<<a[i]<<" ";
}
cout<<endl;

for (int i =0;i<n;++i){

 if( a[i]==0)cout<<0<<" ";
}
}





int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


   solve();







return 0;
}











