#include <iostream>
using namespace std;
int max( int a, int b );
int main()
{    
    int a,b,n;
	cout<<"��������������";
	cin>>a>>b;
	n=max(a,b);
	cout<<"�ϴ���Ϊ��"<<n;
    return 0;
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

