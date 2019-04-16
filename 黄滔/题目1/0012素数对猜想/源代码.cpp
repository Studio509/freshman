#include<iostream>
#include<string>
using namespace std;
int main()
{  
	int N,k=0,p[9592],i,j,m=0,d;
	cin>>N;
	k=0;
	//求出小于N的所有素数
	 for(i=3;i<=N;i++)//N-3次循环
	{ 
		for(j=2;j<i;j++)
		  {   d=i%j;
			if(d==0)
			  break;
		   }
		 if(j==i)
		 {  
			  p[k]=i;
			   k++;
		 }
	}
	  for(i=0;i<k-1;i++)//输出大于2小于N的质数；k-1次循环
	   { 
		   if(p[i+1]-p[i]==2)
			   m++;
	   }
	       cout<<m;
	  return 0;
}

