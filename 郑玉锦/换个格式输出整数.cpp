#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,i;
	cin>>a;
	b=a/100;
	c=a%100/10;
	d=a%100%10;
	for(i=0;i<b;i++)
		cout<<"B";
	for(i=0;i<c;i++)
		cout<<"S";
	for(i=1;i<=d;i++)
	    {
			cout<<i;
	    }
	return 0;
}
