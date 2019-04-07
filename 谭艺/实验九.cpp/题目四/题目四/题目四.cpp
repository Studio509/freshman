# include <iostream>
using namespace std;
int jsvalue(int t);
int main()
{int t,result;
 cout<<"请用户输入t的值：";
 cin>>t;
 result=jsvalue(t);
 cout<<"当t="<<t<<"时,"<<"函数值为："<<result<<endl;
 return 0;}
int jsvalue(int t)
	{int F[10000],n;
      F[0]=0;
	  F[1]=1;
	  if(t==0)
		  return 1;
     for(n=2;n<10000;n++)
		 {F[n]=F[n-1]+F[n-2];
	     if(F[n]>t)
			 return F[n];
		 else
			 continue;}
}


		 
