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
cout<<"--判断润年--"<<endl;
cout<<"请输入一个年份[输入负数退出程序]："<<endl;
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
cout<<year<<"年是闰年"<<endl<<endl;
}
else
{
cout<<year<<"年不是闰年"<<endl<<endl;
}
} while(1);

return 0;
}