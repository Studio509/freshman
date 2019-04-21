#include <iostream>
using namespace std;
int main()
{
	int n;//学生总人数
	int k;//要查询的成绩个数
	int _k[100];//要查询的成绩
	int _n[99999];//每个学生对应的成绩
	int i;
	int j;
	int a[100];//用来记录每个成绩的人数
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cin>>_n[i];
	}
	cout<<endl;
	cin>>k;
	for(i=0;i<100;i++)
		a[i]=0;
	for(i=0;i<k;i++)
	{
		cin>>_k[i];
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			if(_k[i]==_n[j])
			{
				a[i]=a[i]+1;
			}
		}
	}
	system("cls");
	for(j=0;j<i;j++)
	{
		cout<<a[j];
		if(j+1!=i)
			cout<<" ";
	}
	cout<<endl;
	return 0;
}
