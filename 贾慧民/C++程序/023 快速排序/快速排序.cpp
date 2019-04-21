#include "stdafx.h"
#include<iostream>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int x[100],y[100],i,j,l=1,n,o,p;
	cin>>n;//输入数据个数
	for(i=0;i<n;i++)
		cin>>x[i];//输入数据
		for(j=1;j<n;j++)//判断第一个数据是否符合
			{if(x[0]>x[j]) break;}
		if(j==n)//第一个数据符合
			{   y[0]=x[0];//将该值重新放到一个数组中
                for(i=1;i<n;i++)
		        {  for(j=i+1;j<n;j++)//判断是否该数据后面的都大于它
			         { if(x[i]>x[j]) break;}
		           for(o=0;o<i;o++)//判断是否该数据前面的都小于它
		             { if(x[i]<x[o]) break;}
	               if(j==n&&o==i)//上述2种情况都符合
			          { l++;//统计个数
		                for(p=l-1;p<l;p++)//将该值放到另一个数组中
			            y[p]=x[i];}
	              }
		      }
		else//第一个数据不符合
			{  l=0;
               for(i=1;i<n;i++)
		         {  for(j=i+1;j<n;j++)//判断是否该数据后面的都大于它
			           { if(x[i]>x[j]) break;}
		            for(o=0;o<i;o++)//判断是否该数据前面的都小于它
		               { if(x[i]<x[o]) break;}
	                if(j==n&&o==i)//上述2种情况都符合
			           { l++;//统计个数
		                 for(p=l-1;p<l;p++)
			                y[p]=x[i];}//将该值放到另一个数组中
	                    }
		       }               
	  cout<<l<<endl;//输出符合情况的个数
      for(i=0;i<l;i++)
	     cout<<y[i]<<" ";//输出符合情况的值
	return 0;
}
