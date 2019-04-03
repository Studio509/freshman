#include<iostream>
using namespace std;
int main()
{
int n,i;
int a,b,c;
cin>>n;
a=n/100;
b=(n-a*100)/10;
c=n%100%10;
for (i=0;i<a;i++)
{cout<<"B";}
for (i=0;i<b;i++)
{cout<<"S";}
for (i=1;i<=c;i++)
{cout<<i;}
return 0;
}
