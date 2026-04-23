
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll = long long;
    //  __builtin_popcount(n)    number of bits only one
void solve() {
ll x , y;
cin>>x>>y;

if(x*2<y)cout<<"YES"<<endl;
else
    {

   int can =x*2;
   if(can<y && can %x==0 && can%y!=0)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    }s

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

