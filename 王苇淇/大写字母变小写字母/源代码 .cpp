#include <iostream>
#include<cstring>
using namespace std;
void change(char a[50])
{
	int i,s;
	s=strlen(a);
	for(i=0;i<=s;i++)
	{
		if(a[i]>='A'&&a[i]<='z')
		{
			a[i]=32+a[i];
			cout<<a[i];
		}
		else
			cout<<a[i];
	}
}
int main()
{
	char a[50];
	cout<<"请输入字符串:"<<endl;
	cin>>a;
	cout<<"转换后的字符串为:"<<endl;
	change(a);
	return 0;
}
