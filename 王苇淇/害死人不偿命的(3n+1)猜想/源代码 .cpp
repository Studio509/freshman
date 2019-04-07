#include <iostream>
using namespace std;
int main()
{
	int n;
	int a=0;
	cin>>n;
	while(n!=1)
	{
	   if(n%2==0)
		n/=2;
	  else
		  n=(3*n+1)/2;
	     a+=1;
	}
	cout<<a;
	return 0;
}
