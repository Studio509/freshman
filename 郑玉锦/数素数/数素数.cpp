#include <iostream>
using namespace std;
int main()
{
	int m,n,i=2,a[10000],j,k=0;
	cin>>m>>n;
	while(1)
    {
		for(j=2;j<i;j++)
		if(i%j==0)
				break;
	    if(j==i)
		{
			a[k]=i;
			k=k+1;
	    }
		i=i+1;
		if(k==n)
			break;
	}
	system("cls");
	for(i=m-1;i<n;i++)
	{
		cout<<a[i];
		if((i+1)!=k)
			cout<<" ";
		if((i-m+2)%10==0)
			cout<<endl;
	}
	return 0;
}
