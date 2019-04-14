#include<iostream>
using namespace std;
int main()
{
	int a,b;
	b=0;
	cout<<"请输入任何一个自然数a"<<endl;
	cin>>a;
	while(a!=1)
	{
		if(a%2==0)
		{
			a=a/2;
		}
		else
		{
			a=(3*a+1)/2;
		}
		b++;
	}
	cout<<"需要的步数为"<<b;
	cout<<endl;
	return 0;
} 
