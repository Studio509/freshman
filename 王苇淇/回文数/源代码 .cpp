#include <iostream>
#include <string>
using namespace  std;
bool huiwen(char a[100])
{
	int i,j,l;
	char *p;
	p=a;
	l=strlen(a);
	for(i=0,j=l-1;i<=j;i++,j--)
		{
			if (p[i]==p[j])
				return 1;
			else
				return 0;
	}
	return a;
}
	int main()
{
	char a[100];
	cout<<"请输入一个字符串：";
	cin>>a;
	if(huiwen(a))
		cout<<"字符串"<<a<<"是回文！"<<endl;
	else
        cout<<"字符串"<<a<<"不是回文！"<<endl;
	return 0;
}
