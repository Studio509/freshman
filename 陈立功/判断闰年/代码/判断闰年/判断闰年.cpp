#include<iostream>
using namespace std;
bool IsLeapYear(int);
int main()
{
	int year,n;
	
	cout<<"������һ����ݣ�\n";
	cin>>year;
	n=IsLeapYear(year);
	if(n==1)
	    cout<<"������!";
	if(n==0)
		cout<<"�������꣡";
	
}
bool IsLeapYear(int year)
{
if((year%4==0&&year%100!=0)||year%400==0)
	return 1;
else
	return 0;



}