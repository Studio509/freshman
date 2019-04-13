#include "stdafx.h"
#include<iostream>
#include<string>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string str[100][2];
	int  a,n,i,j=0,k=0,l=0,b=0,c=0,d=0,e=0,f=0,g=0;
	cin>>n;//输出交锋次数
	for(i=0;i<n;i++)
	 for(a=0;a<2;a++)
       cin>>str[i][a];//输入交锋情况
	for(i=0;i<n;i++)
		{if(str[i][0]=="C")
			{if(str[i][1]=="C")
			    j++;//（平）
	        if(str[i][1]=="J")
			  {   k++;//（甲胜）
	              b++;/*(甲用C赢)*/}
			if(str[i][1]=="B")
				{l++;//（乙胜）
			    e++;/*(乙用B赢)*/}
		if(str[i][0]=="J")
			{if(str[i][1]=="C")
			{ l++;//（乙胜）
			    f++;/*(乙用C赢)*/} 
	            
	        if(str[i][1]=="J")
			  j++;
			if(str[i][1]=="B")
		   {   k++;//（甲胜）
	            c++;/*(甲用J赢)*/}}
		if(str[i][0]=="B")
			{if(str[i][1]=="C")
			   {   k++;//（甲胜）
	            d++;/*(甲用B赢)*/}
	        if(str[i][1]=="J")
			{ l++;//（乙胜）
			    g++;/*(乙用J赢)*/}
			if(str[i][1]=="B")
				j++;}}}
		cout<<k<<" "<<j<<" "<<l<<endl;//输出甲的赢、平、输情况
		cout<<l<<" "<<j<<" "<<k<<endl;//输出乙的赢、平、输情况
        if(b>c)    //开始判断甲赢得最多的手势
			if((c>d||c==d)||(c<d&&d<b))
				cout<<"C ";     //输出赢得最多的手势 
		if(c>b)
		   if((b>d||b==d)||(b<d&&d<c))
				cout<<"J ";     //输出赢得最多的手势 
		if(d>b)    //结束判断甲赢得最多的手势
		   if((b>c||b==c)||(b<c&&c<d))
				cout<<"B ";   //输出赢得最多的手势 
		 if(g>e)    //开始判断乙赢得最多的手势
			if((e>f||e==f)||(e<f&&f<g))
				cout<<"J";     //输出赢得最多的手势 
		if(e>g)
		   if((g>f||g==f)||(g<f&&f<e))
				cout<<"B";      //输出赢得最多的手势 
		if(f>g)    //结束判断乙赢得最多的手势
		   if((g>e||g==e)||(g<e&&e<f))
				cout<<"C";         //输出赢得最多的手势  
	return 0;
}
