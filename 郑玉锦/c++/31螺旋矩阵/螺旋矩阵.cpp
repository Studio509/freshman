#include <iostream>
using namespace std;
int main()
{
	int N;//定义一个数字的总数
	int m;//m行
	int n;//n列
	int i;//循环用
	int j;//循环用
	cin>>N;
	int a[10000];//用来记录输入的N个数
	int min=999;//定义一个数与m-n的值比大小
	int b;//记录m-n的值并记录满足条件的m的值
	int c;//记录满足条件的n的值
	int d;//用来排列数字大小时记录数字用
	int k=0;//赋值数字时用
	int x[100][100];
	int y=0;//用来控制赋值时的方向
	int a1=0,a2=0,a3=0,a4=0;//用来记录不同赋值的次数
	for(i=0;i<N;i++)
		cin>>a[i];
	for(m=1;m<N;m++)
	{
		for(n=1;n<N;n++)
		{
			if(n*m==N)
			{
				if(m>=n)
				{
					b=m-n;
					if(b<min)
					{
						min=b;
						b=m;
						c=n;
					}
				}
			}
		}
	}
	m=b;
	n=c;
	for(i=1;i<N;i++)//将所有的数字按从大到小的顺序排序
	{
		for(j=0;j<N-i;j++)
		{
			if(a[j]<a[j+1])
			{
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}
		}
	}
	while(1)//按要求将数字赋值给螺旋矩阵
	{
		y=a1+a2+a3+a4;
		if(y%4==0)
			{for(i=a1,j=a2;j<=n-1;j++)
			{
				x[i][j]=a[k];
				k=k+1;
			}
			a1=a1+1;
		}
		else if(y%4==1)
			{for(i=a1,j=n-1;i<=m-1;i++)
			{
				x[i][j]=a[k];
			    k=k+1;
			}
			n=n-1;//终止列数少一
			a2=a2+1;
		}
		else if(y%4==2)
			{for(i=m-1,j=n-1;j>=a4;j--)//执行一次赋值4其终止列数少一
			{
				x[i][j]=a[k];
				k=k+1;
			}
			m=m-1;//终止行数减一
			a3=a3+1;
		}
		else 
			{for(i=m-1,j=a4;i>=a1;i--)
			{
				x[i][j]=a[k];
				k=k+1;
			}
			a4=a4+1;
		}
		if(k==N)
			break;
	}
	system("cls");
	for(i=0;i<b;i++)//按要求输出数字
	{
		for(j=0;j<c;j++)
		{
			cout<<x[i][j];
			if(j+1!=c)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
