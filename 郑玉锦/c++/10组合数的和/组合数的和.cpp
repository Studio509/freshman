#include <iostream>
using namespace std;
int main()
{
	int n,x[100],i,j,k=0,max=0,min=9;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i!=j)
				k=k+x[i]*10+x[j];
	cout<<k;
return 0;
}
