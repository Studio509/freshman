#include<iostream>

#include<string>

using namespace std;

int main()
{
	int  n;

	int a,b,c;

	int i,j;

	string d;

 // cout<<"请输入一个三位数\n";
 
  cin>>n;

  a=n%10;
  
  b=(n-a)/10%10;

  c=(n-b*10-a)/100;

  for(i=0;i<c;i++)
  {
   cout<<"B";
  }
  for(i=0;i<b;i++)
  {
  cout<<"S";
  }
  for(i=1;i<=a;i++)
  {
   cout<<i;
  }
return 0;
}