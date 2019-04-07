#include<iostream>
using namespace std;
bool IsLeapYear(int);
int main()
{
	int year,n;
	
	cout<<"请输入一个年份：\n";
	cin>>year;
	n=IsLeapYear(year);
	if(n==1)
	    cout<<"是闰年!";
	if(n==0)
		cout<<"不是闰年！";
	
}
bool IsLeapYear(int year)
{
if((year%4==0&&year%100!=0)||year%400==0)
	return 1;
else
	return 0;



}