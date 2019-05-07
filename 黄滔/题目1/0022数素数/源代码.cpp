#include<iostream>
using namespace std;
int main()
{   
	int N,M,flag=0,a[1000],i,j=0,k=0;
    cin>>N>>M;
	  for(i=1;i<1000;i++)
		{  
			flag=0;
			for(j=2;j<i;j++)
				if(i%j==0)   
					flag=1;
			if(flag==0)
			{
				a[k]=i;k++;
			}
	     }
	j=0;
	for(i=N;i<=M;i++)
	{    
		  j++;
		  cout<<a[i];
          if(j%10==0&&i==M)
			  break;
		 if(j%10==0)
		 { 
			 cout<<endl;
			 continue;
		 }
		 if(i==M)
			 break;
	     cout<<" ";
	}
	return 0;
}
