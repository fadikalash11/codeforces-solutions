#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll = long long;
    //  __builtin_popcount(n)    number of bits only one

void solve() {
    string s1;
    cin>>s1;

int c1=0,c2=0;
for(int i =0;i<s1.size();++i)
{
    if(int(s1[i])>=65 && int(s1[i]<=96))
    c1++;
    else
        c2++;



}

for (int i =0;i<s1.size();++i)
{
    if((c1>c2) && ( int (s1[i]>=97) && int(s1[i]<=122)))
        s1[i]=s1[i]-32;




}

if(c2>c1)
{

    for (int i =0;i<s1.size();++i)
    {

       if ( ( int (s1[i]>=65) && int(s1[i]<=96)))
        s1[i]=s1[i]+32;


    }

}
if(c1==c2)
{
        for (int i =0;i<s1.size();++i)
    {

       if ( ( int (s1[i]>=65) && int(s1[i]<=96)))
        s1[i]=s1[i]+32;


    }

}
cout<<s1<<endl;
}


    int main()
           {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);


            solve();








        return 0;
    }























