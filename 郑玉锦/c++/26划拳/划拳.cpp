#include <iostream>
using namespace std;
int main()
{
	int n;//定义一个不超过100的整数
	int a[100];//甲喊出的数字
	int b[100];//甲划出的数字
	int c[100];//乙喊出的数字
	int d[100];//乙划出的数字
	cin>>n;
	int i;//循环用
	int x=0;//记录甲喝酒的杯数
	int y=0;//记录乙喝酒的杯数
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
		if(b[i]==a[i]+c[i])
		{
			if(d[i]==a[i]+c[i])
				continue;
			else
				y=y+1;
		}
		else if(d[i]==a[i]+c[i])
			x=x+1;
		else
			continue;
	}
	system("cls");
	cout<<x<<" "<<y<<endl;
	return 0;
}
