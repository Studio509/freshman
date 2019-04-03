#include<cmath>
#include<iostream>
#include<string>
using namespace std;
int pow(int);
int main()
{
	int n,a,j,k,i;
	int sum=0;
	cout<<"请输入一个随机整数：";
	cin>>n;
	for(i=0;n>0;i++)
		{
			a=n%10;
			sum=sum+a;
			n=n/10;
		}
	
	for(sum;sum>0;)	
	{	
		i--;
		k=pow(i);
		j=sum/k;
		if(sum==0)
		switch(sum)
		{
		case 0:cout<<"ling"<<" ";break;
		case 1:cout<<"yi"<<" ";break;
		case 2:cout<<"er"<<" ";break;
		case 3:cout<<"san"<<" ";break;
		case 4:cout<<"si"<<" ";break;
		case 5:cout<<"wu"<<" ";break;
		case 6:cout<<"liu"<<" ";break;
		case 7:cout<<"qi"<<" ";break;
		case 8:cout<<"ba"<<" ";break;
		case 9:cout<<"jiu"<<" ";break;
		}
			if(j==0)
				continue;
		else
			switch(j)
		{
		case 0:cout<<"ling"<<" ";break;
		case 1:cout<<"yi"<<" ";break;
		case 2:cout<<"er"<<" ";break;
		case 3:cout<<"san"<<" ";break;
		case 4:cout<<"si"<<" ";break;
		case 5:cout<<"wu"<<" ";break;
		case 6:cout<<"liu"<<" ";break;
		case 7:cout<<"qi"<<" ";break;
		case 8:cout<<"ba"<<" ";break;
		case 9:cout<<"jiu"<<" ";break;
		}
		sum=sum-j*k;	
		}
	
	
	
	return 0;
}
int pow(int i)
{
	int s,x=1;
	for(s=1;s<=i;s++)
		{
			x=x*10;
	}
	return x;
}