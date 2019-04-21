#include <iostream>
using namespace std;
int main()
{
	int n;//要输入的数的个数
	int a[100000];//记录每个输入的数
	int i;//循环用
	int j;//循环用
	int b[100000];//记录满足要求的数字
	int k=0;//记录满足要求的数字的个数
	cin>>n;//输入要输入数字的个数
	for(i=0;i<n;i++)//输入每一个数字
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j]>a[i])//如果a[i]的左边有一个大于a[i]则跳出循环
				break;
		}
		if(j-1==i)//如果上一个循环时正常结束循环则继续下一循环
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[i])//如果a[i]的右边有一个小于a[i]则跳出循环
					break;
			}
			if(j==n)//如果这个循环是正常结束则记录这个数字
			{
				b[k]=a[i];
				k=k+1;
			}
		}
	}
	system("cls");
	cout<<k<<endl;
	for(i=0;i<k;i++)
	{
		cout<<b[i];
		if(i+1!=k)
			cout<<" ";
	}
	return 0;
}
