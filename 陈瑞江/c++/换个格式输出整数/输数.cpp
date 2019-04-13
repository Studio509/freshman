#include<iostream>
using namespace std;
int main()
{
	int num,x,y,z,i,a;
	while(1)
	{cout<<"please input a number:";
	cin>>num;
	x=num%10;
	y=num/10%10;
	z=num/100;
	for(i=1;i<=z;i++)
		cout<<"B";
	for(i=1;i<=y;i++)
		cout<<"S";
	for(i=1;i<=x;i++)
		cout<<i;
	cout<<endl<<"是否继续(1/0)：";
	cin>>a;
	if(a=1)
		continue;
	if(a=0)
		break;
	}
	return 0;
}
