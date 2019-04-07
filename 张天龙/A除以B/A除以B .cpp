#include <iostream>
using namespace std;
void main()
{
	int n,m,t,a;
	cout<<"请输入小于1000的数：\n";
	cin>>n;
	cout<<"输入Q";
	cin>>m;
	t=n%m;
	a=(n-t)/m;
	cout<<t<<endl<<a;
}
