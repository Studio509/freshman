#include<iostream>
using namespace std;
int main()
{
	int m,n,k=0,u,a[10],i,j=0;
	cin>>m>>n;
	u=m*n;
	while(u>0)
	{
		a[k]=u%10;
		k++;
		u=u/10;
	}
	for(i=0;i<k;i++)
	{
		if(a[i]==0)
			j++;
		else
			break;
	}
	for(j;j<k;j++)
		cout<<a[j];
	return 0;
}