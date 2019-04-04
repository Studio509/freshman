#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
  int m,i,n;
	cout<<"输入一个整数区间：";
	cin>>m>>n;
	i=sum(m,n);
	cout<<"区间整数之和："<<i<<endl;
    return 0;
}
int sum(int m,int n)
{
	int he=0;
	for(;m<=n;m++)
	{
		he=he+m;
	}
	return he;
}