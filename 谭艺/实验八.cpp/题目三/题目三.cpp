# include <iostream>
using namespace std;
int JiShuan(int m,int k,int cun[100]);
int main()
{	int i,x,z,t,cun[300];
   cout<<"请输入从那个数之后开始查找：";
   cin>>x;
   cout<<"请输入要找的个数：";
   cin>>z;
   t=JiShuan(x,z,cun);
   cout<<"最终结果为："<<endl;
   for(i=1;i<=z;i++)
	   cout<<cun[i];
   return 0;}
int JiShuan(int m,int k,int cun[100])
{int h,i,j,t;
 for(h=0,i=2;i<=m;i++)
	 {{t=m+1;
     if(t%i!=0)
		 h++;t++;}
 for(i=1;i<=k;i++)
     if(h==t-1)
		 cun[i]=t;
  return cun[i];}}




 
 



