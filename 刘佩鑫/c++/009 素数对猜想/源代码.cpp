#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,a=0,b=2;
	cout<<"请输入正整数n";
	cin>>n;
	for(i=3;i<=n;i++)
	{
	 for(j=2;j<=sqrt(float (i));j++)
	 if(i%j==0)
	 break;
	 if(j>sqrt(float (i)))
		{
			if(i-b==2)
			a++;
			b=i;
		}
	 }
	cout<<"满足猜想的素数对的个数为"<<a;	
	return 0;
}
