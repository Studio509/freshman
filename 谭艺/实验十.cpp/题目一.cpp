# include <iostream>
using namespace std;
bool IsLeapYear(int);
int main()
{int m,n;
cout<<"请输入要判断的年份：";
cin>>m;
n=IsLeapYear(m);
if(n==1)
cout<<"判断结果为：闰年"<<endl;
else
cout<<"判断结果为：不是闰年"<<endl;
return 0;}
bool IsLeapYear(int t)
{
if(t%4==0&&t%100!=0||t%400==0)
	return 1;
else
	return 0;
}

