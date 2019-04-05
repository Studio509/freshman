#include<iostream>
using namespace std;
int main()
{
	int n,j,m,a[100000],i=1,s=0,p;
	cin>>n;
	for(m=1;m<n;m++)
	{
		for(j=2;j<=m;j++)
		{
			if(m%j==0)
				break;
			else if(j==m-1)
			{
				a[i]=m;
				i++;
			}
		}
	}
	for(p=2;p<=i;p++)
	{
		if(a[p]-a[p-1]==2)
			s++;
	}
	cout<<s;
	return 0;
}