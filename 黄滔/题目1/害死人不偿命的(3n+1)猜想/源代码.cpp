#include<iostream>
using namespace std;
#include<string>
int main()
{  
	int n,x=0;
    cin>>n;
	while(n!=1)
	{
	if(n%2==0)
	{
	   n=n/2;
	}
	else
	{
	 n=(3*n+1)/2;
	}
	x++;
	}
cout<<x;
	return 0;
}
