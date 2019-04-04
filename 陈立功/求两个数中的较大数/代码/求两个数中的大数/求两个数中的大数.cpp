#include <iostream>
using namespace std;
int max( int a, int b );
int main()
{    
    int a,b,n;
	cout<<"输入两个整数：";
	cin>>a>>b;
	n=max(a,b);
	cout<<"较大数为："<<n;
    return 0;
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

