#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
int main()
{  
	int k,s[100],a[100][20],n=0,m,b,i,j=0,su[100],l=0;//n是输入的数中会覆盖的数
	cin>>k;//输入正整数 K (<100)
	for(i=0;i<k;i++)//第 2 行给出 K 个互不相同的待验证的正整数 n (1<n≤100)的值，数字间用空格隔开。
	 cin>>s[i];
    for(i=0;i<k;i++)//求每个数覆盖的数
		{   
			j=0;
			n=s[i];
		 while(n!=1)//判断是否为偶数；
	      {  
			   if(n%2==0)
				n=n/2;
			   else
			   n=(3*n+1)/2;
			   a[i][j]=n;//将每个数所覆盖的数存进二维数组a中
			   j++;
		  }
	    }
	m=j;
	for(b=k-1;b>0;b--)
	{
		n=0;
		for(i=0;i<k;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]==s[b])//如果某个数被覆盖了n=1;如果没被覆盖存进一个数组；
					n=1;
			}
		}
		if(n==0)
		{
			su[l]=s[b];
			l++;
		}
	}
	//排序
	for(i=0;i<l;i++)
	{
		if(su[l]<su[l+1])
			{
				k=su[l];
				su[l]=su[l+1];
				su[l+1]=k;
			}
	}
	//输出结果；
	for(i=0;i<l;i++)
	{
	   cout<<su[i];
	   if(i==l-1)
		break;
	   cout<<" ";
	}
	return 0;
}
