#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,m;
	int sum1=0,sum2=0;
	cin>>n>>m;
	int p[10000]={0};
	for(int i=1;i<=m;i++)
	{
		int x;
		cin>>x;
		p[x]=1;
	}
	for(int j=0;j<n;j++)
	{
		string s;
		int m;
		bool flag=0;
		cin>>s;
		cin>>m;
		for(int k=0;k<m;k++)
		{
			int y;
			cin>>y;
			if(p[y]==1&&flag==0)
			{
				cout<<s;
				printf(": %04d",y);
				flag=1;
				sum1++;
				sum2++;
				continue;
			}
			if(p[y]==1&&flag==1)
			{
				printf(" %04d",y);
				sum2++;
			}
		}
		if(flag==1)
			cout<<'\n';
	}
	cout<<sum1<<' '<<sum2;
}
