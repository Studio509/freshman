#include "stdafx.h"
#include<iostream>
#include<string >
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int i,j,k,l,m,n;
	string str;
	cin>>n>>str;//输入有个符号和符号的种类
	for(i=1;i>=0;i++)
		if((n>2*(i-1)*(i-1)-1&&n<2*i*i-1)||n==2*(i-1)*(i-1)-1)break;//判断不重复的行数
	for(k=i-1;k>0;k--)   //上半部分
	 { for(j=0;j<i-1-k;j++)  //输入空格
		  cout<<" ";
	   for(l=(2*(i-1)-1)-2*j;l>0;l--)  //输入符号
		   cout<<str;
	   cout<<endl;     //换行
	} 
	for(k=1;k<i-1;k++)    //上半部分
	 { for(j=0;j<i-2-k;j++)    //输入空格
		  cout<<" ";
	   for(l=(2*(i-1)-1)-2*j;l>0;l--)    //输入符号
		   cout<<str;
	   cout<<endl;    //换行
	} 
	cout<<n-2*(i-1)*(i-1);  //计算剩余符号个数
	return 0;
}
