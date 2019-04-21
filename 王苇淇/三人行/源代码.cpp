#include<iostream>
#include<math.h>
using namespace std;
void compare(int A,double B){
	if(A==B)
		cout<<" Ping";
	else if(A<B)
		cout<<" Cong";
	else
		cout<<" Gai";
}
int main(){
	int m,x,y;  
	int a=0;//甲
	cin>>m>>x>>y;
	for(a=99;a>=10;a--)
    {int b = a%10*10+a/10;  //乙 是甲的数字调换
	double c = abs(a-b)*1.0/x;   //丙 是甲乙能力差的1/x
	if(c*y==b)
	{   //丙*y = 乙
			cout<<a;
			compare(m,a);
			compare(m,b);
			compare(m,c);
			return 0;
	}
	}
	cout<<"No Solution";
	return 0;
}
