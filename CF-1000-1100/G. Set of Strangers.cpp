
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


int n, m;
cin >> n >> m;


vector<vector<int>> a(n, vector<int>(m));
int max=n*m;
vector<int>   cost(max+1,0);
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        int c=a[i][j];

        if(cost[c]==0)cost[c]=1;

        if(i> 0 && a[i-1][j]==c)cost[c]=2;
        if(j>0 && a[i][j-1]==c)cost[c]=2;

    }
}
    ll  total =0;
    for (int i =1;i<=max;++i)
    {
        total+=cost[i];


    }
    ll ans=LLONG_MAX;
    for (int i=0;i<n ;++i)
    {


    for(int j =0;j<m;++j)
    {

int target =a[i][j];
ll cur=total-cost[target];
ans=min(ans,cur);
    }}



cout<<ans<<endl;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

int t ;
cin>>t;
 while(t--)solve();








return 0;
}











