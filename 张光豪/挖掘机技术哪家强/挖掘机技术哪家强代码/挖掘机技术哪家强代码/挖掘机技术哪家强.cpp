#include<iostream>
using namespace std;
int main()
{
	int a[100001]={0},i,j,m,n,k=0,b=0;
	cin>>i;
	for(j=0;j<i;j++)
	{
		cin>>m>>n;
		if(k<m)
			k=m;
		a[m]=a[m]+n;
	}
	for(j=1;j<=k;j++)
		if(a[j]>b)
		{
			b=a[j];
			i=j;
		}
		cout<<i<<" "<<b; 
		return 0;
}