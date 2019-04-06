#include<iostream>
using namespace std;
int main()
{
  int n,i,j,k,a,b,c;
  cout<<"输出一个不超过3位的正整数:";
  cin>>n;
  a=n/100;
  b=n/10%10;
  c=n%10;
  for(i=1;i<=a;i++)
     cout<<"B";
  for(j=1;j<=b;j++)
     cout<<"S";
  for(k=1;k<=c;k++)
    cout<<k;
  cout<<endl;
  return 0;
}
