
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll = long long;
    //  __builtin_popcount(n)    number of bits only one
void solve() {
int n;
cin>>n;
vector<int>cards(n);
for(int i =0;i<n;++i)cin>>cards[i];
int left=0,right=n-1;
int Serejascore=0,Dimascore=0;
bool Sereja=true;
while(left<=right)
{
    int choosebig=0;
    if(cards[left]>cards[right])
    {

        choosebig=cards[left];
        left++;}
        else
        {
            choosebig=cards[right];
            right--;
        }




    if(Sereja)
    {

        Serejascore+=choosebig;}
        else
            Dimascore+=choosebig;



    Sereja=!Sereja;



}

cout<<Serejascore<<" "<< Dimascore<<endl;


}

    int main()
           {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);


            solve();








        return 0;
    }

