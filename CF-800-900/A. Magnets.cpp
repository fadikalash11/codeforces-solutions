
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll = long long;
    //  __builtin_popcount(n)    number of bits only one
void solve() {
int n;
cin>>n;
int a[n];
for (int i =0;i<n;++i)cin>>a[i];
int ans=1;
for (int i =0;i<n-1;++i)
{
    if(a[i]!=a[i+1])
        ans++;



}

cout<<ans<<endl;




}

    int main()
           {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);


            solve();








        return 0;
    }

