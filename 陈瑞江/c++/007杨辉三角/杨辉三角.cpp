#include <iostream>
using namespace std;
int main()
	{
	int a[100][100],n,i,j;
	cout<<"请输入杨辉三角的行数：";
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++)
		{
			if(j==0)
				a[i][j]=1;
			else if(i==j)
				    a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			
	    }
	for(i=0;i<n;i++)
		{for(j=0;j<=i;j++)
			cout<<a[i][j]<<" ";
	     cout<<endl;}
    return 0;
}
