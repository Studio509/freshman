#include<iostream>
using namespace std;
int main()
{
	int n,i,m,k=1;
	cin>>n;
	i=n/100;
	for(m=i;m>0;m--)
		cout<<"B";
	n=n-100*i;
	i=n/10;
	for(m=i;m>0;m--)
		cout<<"S"; 
	n=n-10*i;
	for(m=n;m>0;m--)
	{
		cout<<k;
		k++;
	}
	return 0;
}