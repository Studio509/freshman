#include <iostream>
using namespace std;
int main()
{
	int n;//定义一个整数用来记录总人数
	int i;//循环用
	int j;//循环用
	int a[10000];//记录队伍编号用
	int b[10000];//记录队员编号用
	int c[10000];//记录成绩用
	int max=0;//记录成绩最高的组
	int d;//记录一个队伍的总成绩所用
	int x=0;//记录陈合计最高的组的成绩用
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i]>>b[i]>>c[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])//找相同的组
				d=c[i]+c[j];
			if(d>x)
			{
				x=d;
				max=a[i];
			}
		}
	}
	system("cls");
	cout<<max<<" "<<x<<endl;
	return 0;
}
