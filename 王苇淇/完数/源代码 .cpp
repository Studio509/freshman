#include <iostream>
using namespace std;
int main()
{
  int i,j,sum=0;
  for(j=1;j<=1000;j++)
  {
    for(i=1;i<j;i++)
       if(j%i==0) 
	   sum=sum+i;
	   if(sum==j)
	   cout<<j<<endl;
	sum=0;
  }
  return 0;
}
