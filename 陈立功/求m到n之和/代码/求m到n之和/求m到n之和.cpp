#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
  int m,i,n;
	cout<<"����һ���������䣺";
	cin>>m>>n;
	i=sum(m,n);
	cout<<"��������֮�ͣ�"<<i<<endl;
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