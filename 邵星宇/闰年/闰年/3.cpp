#include <iostream>
using namespace std;
bool isLeapYear(int year)
{
if((0==year%4)&&(0!=year%100))
{
return true;
}
if(0==year%400)
{
return true;
}
return 0;
}
int main()
{
int year;
bool flag;
cout<<"--�ж�����--"<<endl;
cout<<"������һ�����[���븺���˳�����]��"<<endl;
do
{
cin>>year;
if(year<0)
{
break;
}
flag=isLeapYear(year);
if(flag==true)
{
cout<<year<<"��������"<<endl<<endl;
}
else
{
cout<<year<<"�겻������"<<endl<<endl;
}
} while(1);

return 0;
}