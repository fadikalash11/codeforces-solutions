

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lld = long double;
const ll Mod=1e9+7;
const int INF=1e9;

void solve(){


ll a[4];
for (int i =0;i<4;++i)cin>>a[i];
string s ;
cin>>s;
int sum=0;
for (int i =0;i<s.size();++i)
{

if(s[i]=='1')
{
   sum+=a[0];
}
if(s[i]=='2')
{
   sum+=a[1];
}if(s[i]=='3')
{
   sum+=a[2];
}if(s[i]=='4')
{
   sum+=a[3];
}
}

cout<<sum<<endl;

}





int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


   solve();







return 0;
}




