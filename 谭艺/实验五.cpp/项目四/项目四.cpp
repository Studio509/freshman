# include <iostream>
using namespace std;
int main()
{int i=0,t=0,m,n;
 while(m=1)
 {cout<<"请输入您的成绩：";
  cin>>n;
  if(n>100||n<0)
	  cout<<"您输入的成绩有误，请重新输入您的成绩：";
  else if(n>=60)
	  {cout<<"成绩合格"<<endl;
       i=i+1;}
  else
	  {cout<<"您的成绩不合格";
       t=t+1;}
  cout<<"是否继续输入成绩，继续按1，退出按2";
  cin>>m;
  if(m==1)
	  continue;
  else
	  break;}
 cout<<"总人数为："<<"  "<<i+t<<endl;
 cout<<"及格人数为："<<"  "<<i<<endl;
 cout<<"不及格人数为："<<"  "<<t<<endl;
 return 0;}

   

	
     
		

		   
		

   
		 
	