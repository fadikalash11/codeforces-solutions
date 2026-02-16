
#include <iostream>
using namespace std;

int  main ()
{
int Arry1[5][5];
int Center=2,x=0,y=0,NumberOfSpece=0;
for (int i = 0; i <5; i++)
{
for (int j = 0; j<5; j++)
{
cin>>Arry1[i][j];
if (Arry1[i][j]==1)
{
NumberOfSpece =abs(i-Center)+abs(j-Center);
}

}

}
cout<<NumberOfSpece;
}
