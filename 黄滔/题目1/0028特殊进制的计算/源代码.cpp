#include<iostream>
using namespace std;

int main()
{

	int p1,p2,p3,a1,a2,a3,i,r,t;
	scanf("%d.%d.%d %d.%d.%d",&p1,&p2,&p3,&a1,&a2,&a3);
	i=p1*17*29+p2*29+p3;
	t=a1*17*29+a2*29+a3;
	r=abs(i-t);
	if(i<t)
		cout<<r/29/17<<"."<<r/29%17<<"."<<r%29;
	else
		cout<<-r/29/17<<"."<<r/29%17<<"."<<r%29;
	return 0;
}
