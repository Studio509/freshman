# include <iostream>
using namespace std;
int main()
{int i=0,t=0,m,n;
 while(m=1)
 {cout<<"���������ĳɼ���";
  cin>>n;
  if(n>100||n<0)
	  cout<<"������ĳɼ������������������ĳɼ���";
  else if(n>=60)
	  {cout<<"�ɼ��ϸ�"<<endl;
       i=i+1;}
  else
	  {cout<<"���ĳɼ����ϸ�";
       t=t+1;}
  cout<<"�Ƿ��������ɼ���������1���˳���2";
  cin>>m;
  if(m==1)
	  continue;
  else
	  break;}
 cout<<"������Ϊ��"<<"  "<<i+t<<endl;
 cout<<"��������Ϊ��"<<"  "<<i<<endl;
 cout<<"����������Ϊ��"<<"  "<<t<<endl;
 return 0;}

   

	
     
		

		   
		

   
		 
	