#include <iostream>
using namespace std;
int main()
{
	int n,m,a[100],u,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<=m;i++)
	{
		u=a[n-1];
		for(j=1;j<n;j++)
			a[n-j]=a[n-j-1];
		a[0]=u;
	}
	system("cls");
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1)
			cout<<" ";
	}
	return 0;
}
