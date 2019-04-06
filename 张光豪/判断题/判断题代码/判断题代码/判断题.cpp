#include<iostream>
using namespace std;
#define k 1000
#define p 100
int main()
{
	int i,a[k][p],N,M,j,z=0;
	cin>>N>>M;
	for(i=0;i<N+2;i++)
		for(j=0;j<M;j++)
			cin>>a[i][j];
	for(i=2;i<N+2;i++)
	{
        for(j=0;j<M;j++)
		{
			if(a[i][j]==a[1][j])
				z=z+a[0][j];
		}
		cout<<z;
		if(i!=N+1)
		cout<<endl;
		z=0;
	}
	return 0;
}}