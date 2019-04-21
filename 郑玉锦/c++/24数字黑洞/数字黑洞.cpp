#include <iostream>
using namespace std;
int main()
{
	int n1;//定义一个整数
	cin>>n1;
	int n2;//这个数字重新排序后的数字
	int n3;//代替n1去每一位数字所用
	int i;//循环用
	int j;//循环用
	int a[4];//存储这个整数的各位数
	int b;//计算差所用
	int c;//转换数字位数用
	while(1)
	{
		n3=n1;
        for(i=0;i<4;i++)//取这个整数的每一位数字
	    {
			a[i]=n3%10;
			n3=n3/10;
	    }
		for(i=1;i<4;i++)//将这些数字按顺序排序
		{
			for(j=0;j<4-i;j++)
			{
				if(a[j]<a[j+1])
				{
					c=a[j];
					a[j]=a[j+1];
					a[j+1]=c;
				}
			}
			
		}
		n1=0;
		n2=0;
		for(i=3;i>=0;i--)//计算这两个新整数
		{
			n1=n1*10+a[3-i];
			n2=n2*10+a[i];
		}
		b=n1-n2;
		system("cls");
		if(n1/1000==0)
		{
			if(n1/100%10==0)
			{
				if(n1/10%100==0)
				{
					if(n1%1000==0)//else if(n1==0)
						cout<<"000"<<n1<<"-";
					else
					    cout<<"0000-";
				}

				else
					cout<<"00"<<n1<<"-";
			}
				
			else
				cout<<"0"<<n1<<"-";
		}
		else
			cout<<n1<<"-";
		if(n2/1000==0)
		{
			if(n2/100%10==0)
			{
				if(n2/10%100==0)
				{
					if(n2%1000==0)//else if(n2==0)
						cout<<"000"<<n2<<"=";
					else
					    cout<<"0000=";
				}

				else
					cout<<"00"<<n2<<"=";
			}
				
			else
				cout<<"0"<<n2<<"=";
		}
		else
			cout<<n2<<"=";
		if(b/1000==0)
		{
			if(b/100%10==0)
			{
				if(b/10%100==0)
				{
					if(b%1000==0)//else if(b==0)
						cout<<"000"<<b<<endl;
					else
					    cout<<"0000"<<endl;
				}

				else
					cout<<"00"<<b<<endl;
			}
				
			else
				cout<<"0"<<b<<endl;
		}
		else
			cout<<b<<endl;
		n1=b;//将b的值赋给n1;
		if(b==0||b==6174)
			break;
	}
	return 0;
}
