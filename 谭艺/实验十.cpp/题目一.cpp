# include <iostream>
using namespace std;
bool IsLeapYear(int);
int main()
{int m,n;
cout<<"������Ҫ�жϵ���ݣ�";
cin>>m;
n=IsLeapYear(m);
if(n==1)
cout<<"�жϽ��Ϊ������"<<endl;
else
cout<<"�жϽ��Ϊ����������"<<endl;
return 0;}
bool IsLeapYear(int t)
{
if(t%4==0&&t%100!=0||t%400==0)
	return 1;
else
	return 0;
}

