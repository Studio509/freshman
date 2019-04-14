#include <iostream>
#include <string>
using namespace std;
struct people
{
	string name;
	int year;
	int month;
	int day;
};
int main()
{

	int n;//记录总人数
	int m;//记录符合条件的人数
	people  p[999];//定义一个足够大的people类数组
	int i;//循环用
	int j;//循环用
	people a;//排序用
	cin>>n;
	for(j=0,i=0;j<n;j++,i++)
	{
		cin>>p[i].name;
		cin>>p[i].year;
		cin>>p[i].month;
		cin>>p[i].day;
		if(p[i].year>2014)
			i=i-1;
		else if(p[i].year==2014)
		{
			if(p[i].month>9)
				i=i-1;
			else if(p[i].month==9&&p[i].day>6)
				i=i-1;
		}
		else if(p[i].year<1814)
			i=i-1;
		else if(p[i].year==1814)
		{
			if(p[i].month<9)
				i=i-1;
			else if(p[i].month==9&&p[i].day<6)
				i=i-1;
		}
	}
	m=i;
	for(i=0;i<m-1;i++)
	{
		if((p[i].year>p[i+1].year)||(p[i].year==p[i+1].year&&p[i].month>p[i+1].month)||(p[i].year==p[i+1].year&&p[i].month==p[i+1].month&&p[i].day>p[i+1].day))
		{
			a=p[i];
			p[i]=p[i+1];
			p[i+1]=a;
		}
	}
	system("cls");
	cout<<m<<" "<<p[0].name<<" "<<p[m-1].name<<endl;
	return 0;
}
