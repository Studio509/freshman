#include<iostream>
using namespace std;
int main()
{
  int a1,b1,a2,b2,a,b,i,j,m;
  cin>>a1>>b1>>a2>>b2;
  b=b1*b2;
  a=a1*b2+a2*b1;
	i= a;
	j= b;
 	while(j!=0)
  {
 	  m=i%j;
 	  i=j;
 	  j=m;
	}
	a=a/i;
	b=b/i;
  if(b==1)
       cout<<a<<endl;
	else
       cout<<a<<"/"<<b<<endl;
	return 0;
} 
