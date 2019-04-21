#include<iostream>
using namespace std;
int main()
{
  int n;
  int n1,n2,n3;
  cin>>n;
  n1=n/100;
  n2=(n%100)/10;
  n3=n%10;
  for(int i=0;i<n1;i++)
  {
    cout<<"B";
  }
  for(int i=0;i<n2;i++)
  {
    cout<<"S";
  }
  for(int i=1;i<=n3;i++)
  {
    cout<<i;
  }
  
  return 0;
