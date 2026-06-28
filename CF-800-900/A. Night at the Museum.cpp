

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lld = long double;
const ll Mod=1e9+7;
const int INF=1e9;

void solve(){

char c[26]={'a','b','c','d','e','f','g','h','i','j','k',
            'l','m','n','o','p','q','r','s','t','u','v',
            'w','x','y','z'};

            string s ;
            cin>>s;
            int temp1=0;
            int temp2=0;
            int ans =0;
            int current=0;
            for (int i =0;i<s.size();++i)
            {
            int target=0;
for (int j=0;j<26;j++)
{
if(s[i]==c[j])
{
target=j;

}

}
temp1=abs(current-target);
temp2=26-temp1;
int minvalue=min(temp1,temp2);
ans+=minvalue;

current=target;
            }
            cout<<ans<<endl;

}





int  main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


   solve();







return 0;
}




