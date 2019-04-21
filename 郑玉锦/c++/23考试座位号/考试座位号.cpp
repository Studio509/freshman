#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;//总人数
	int m;//查找的人数
	int i;
	int j;
	int k;
	string a[1000];//准考证号
	int b[1000];//试机座位号
	int c[1000];//考试座位号
	int d[1000];//查询座位号
	cin>>n;
	for(i=0;i<n;i++)
	{   
		cin>>a[i]>>b[i]>>c[i];
	}
	cin>>m;
	for(i=0;i<m;i++)
		cin>>d[i];
	system("cls");
	for(k=0;k<i;k++)
	{
		for(j=0;j<n;j++)
		{
			if(d[k]==b[j])
				cout<<a[j]<<" "<<c[j]<<endl;
		}
	}
	return 0;
}
