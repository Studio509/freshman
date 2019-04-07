# include <iostream>
using namespace std;
int main()
{int i,t,m,n,z;
 for(i=5;i>0;i--)
{ for(t=0;t<=5-i;t++)
		 cout<<" ";
     for(m=1;m<=6-i;m++)
		 if(m=6-i)
		 cout<<"*";   
     for(n=1;n<=2*i-3;n++)
	 cout<<" ";
     for(z=1;z<=i+4&&i>1;z++)
	 if(z==i+4)
		 cout<<"*";
         cout<<endl;}
 for(i=2;i<=5;i++)
     {for(t=0;t<=5-i;t++)
     cout<<" ";
      for(m=1;m<=6-i;m++)
	  if(m==6-i)
       cout<<"*";
      for(n=1;n<=2*i-3;n++)
	  cout<<" ";
      for(z=1;z<=i+4;z++)
	  if(z==i+4)
		  cout<<"*";
        cout<<endl;}
 return 0;}