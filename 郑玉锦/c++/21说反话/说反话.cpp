#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;//定义一个字符串
	getline(cin,a);//可以录入空格
	int b;//用来记录输入的字符串的长度
	b=a.length();
	int i;//循环用
	int c=0;//用来记录最后的空格的位置
	for(i=0;i<b;i++)//寻找输入的字符串的最后一个空格的位置
	{
		if(a[i]==' ')
			c=i;
	}
	system("cls");
	if(c!=0)//如果存在空格则这样输出
	{
		for(i=c+1;i<b;i++)
		{
			cout<<a[i];
		}
		cout<<" ";
	    for(i=0;i<c;i++)
		    cout<<a[i];
	}
	else//不存在空格则原样输出
		cout<<a;
	return 0;
}
