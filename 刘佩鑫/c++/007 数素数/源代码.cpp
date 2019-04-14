#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=2,j,a=0;
    bool b;
    int m,n;
	cout<<"请输入要输出素数的区间";
    cin>>m>>n;
	cout<<"输出的素数为";
    	while(a!=n)
    {
    	b=true;
    	for(j=2;j<=sqrt(float(i));j++)
    	{
    	  if (i%j ==0) 
    	    {
    		   b=false;break;
    	    }
    	}
    	if(b) 
    	{
    	 a++;
    	 if(a>=m&&a<n&&((a-m+1)%10!=0)) cout<<i<<" ";
    	 if(a>=m&&a<n&&((a-m+1)%10==0)) cout<<i<<endl;
         if(a==n) 
		 cout<<i;
    	}
    		i++;
    }
    	return 0;
}
