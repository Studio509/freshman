#include<iostream>
using namespace std;
#define N 100
int main()
{
	int p,k,n,a[N][4],i=0,j=0;
	cin>>n;
    for(p=0;p<n;p++)
		for(k=0;k<4;k++)
			cin>>a[p][k];
    for(p=0;p<n;p++)
	{
		if(a[p][1]==a[p][0]+a[p][2]&&a[p][3]!=a[p][0]+a[p][2])
			j++;
        else if(a[p][3]==a[p][0]+a[p][2]&&a[p][1]!=a[p][0]+a[p][2])
			i++;
	}
	cout<<i<<" "<<j;
	return 0;
}