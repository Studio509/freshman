#include<iostream>
using namespace std;
int tz(int n)
{
	int i;
		double a=1;
	for(i=10;i>n;i--)
    a=(a+1)*2;
	return a;
}
int main()
{
	int w,k;
	cout<<"请输入第几天:";
	cin>>w;
	k=tz(w);
	cout<<"桃子数为"<<k;
	return 0;
}
