#include "stdafx.h"
#include<iostream>
#include<string>
# include <cstdlib>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string  str,str1;
	char b[10];
	int a,i,j,k,l=0,m=0,n=0,x[100],c[100],sum=0;
	cin>>str;//s=输入字符串
	a=str.length ();//计算字符串长度
	for(i=0;i<a;i++)//开始判断字符是否属于英文字母
		if(str[i]>64&&str[i]<123)
		  {	if(str[i]<91)//判断是否为大写字母
		     {  l++;//计算个数
	          for(j=l-1;j<l;j++)
				  x[j]=str[i]-64;}//将所代表的数放到数组
		   else//判断是否为大写字母
			 {  l++;//计算个数
	          for(j=l-1;j<l;j++)
				  x[j]=str[i]-96;}}//将所代表的数放到数组
		for(i=0;i<l;i++)
			sum=x[i]+sum;//计算英文字母代表的数字之和
		for(i=1;i>0;i++)
	{	
		l=sum%2;//计算和对2取余
	    sum=sum/2;//计算和除以2的商
		  n++;//统计执行了几次
		  for(k=n-1;k<n;k++)
			  c[k]=l;//将得到的余数存放到数组中
            if(sum==0)break;//跳出循环的条件
	}
	for(i=n-1;i>=0;i--)
		m=c[i]*pow((float)10,i)+m;//计算转换进制后的数
	 _itoa(m,b,10);//将int转换为char
	 str1=b;//将char转换为string
	 a=str1.length();//计算转换后字符长度
		 l=0;m=0;
		 for(i=0;i<a;i++)
			{ if(str1[i]==48)//判断是否等于0
				 l++;//统计等于0的个数
			 else//判断是否等于1的
				 m++;}//统计等于1的个数
		cout<<l<<" "<<m;//输出等于0和等于1的个数
	return 0;
}
