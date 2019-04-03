#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{   int pa,pb,a=0,b=0,i,n=0;
    string A,B,DA,DB;
    cin>>A;
    cin>>DA;
    cin>>B;
    cin>>DB;
	 for(i=0;i<A.length();i++)//计数
	   {
		   if(DA[0]==A[i])
		   a++;
	   }
	 for(i=0;i<B.length();i++)//计数
	   {
		   if(DB[0]==B[i])
		         b++;
	   } 
	 pa=atoi(DA.c_str());;pb=atoi(DB.c_str());
	 for(i=1;i<a;i++)//计算pa
	  {
	   pa=pa*10+atoi(DA.c_str());
	  }
	 for(i=1;i<b;i++)//计算pb
	  {
		pb=pb*10+atoi(DB.c_str());
	   }
	 if(a==0)
		 pa=0;
	 if(b==0)
		 pb=0;
    n=pa+pb;
    cout<<n;
	return 0;
}
