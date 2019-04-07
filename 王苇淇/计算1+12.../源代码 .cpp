#include <iostream>
using namespace std;
int main()
{
  int i,j=0,sum=0;
  for(i=1;i<=5;i++)
  {
    sum=sum+i+j;
	j=(i+j)*10;
  }
  cout<<"1+12+123+1234+12345="<<sum<<endl;
  return 0;
}
