#include <iostream>
using namespace std;
int main()
{
	int n,i,x,a[100],j,k=0;
	a[0]=2;
	cin>>n;
	for(i=2;i<=n;i++)
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			if(j+1==i)
				{
					a[k]=i;
					k=k+1;
			    }
		}
	j=0;
	for(i=1;i<k;i++)
		if(a[i]-a[i-1]==2)
			j=j+1;
	cout<<j<<endl;
	return 0;
}
