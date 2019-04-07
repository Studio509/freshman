#include<iostream>
#include<string>
using namespace std;
const int m=100;
void main()
{int n,i;string num[m],name[m],xuehao[2],ming[2];float score[m],min,max;
 cout<<"请输入需要读入学生的人数n："<<endl;
 cin>>n;
 cout<<"请输入学生的学号，姓名，成绩：";
 for(i=1;i<=n;i++)
 {cin>>num[i]>>name[i]>>score[i];}
 min=score[1];max=score[1];
 for(i=1;i<=n;i++)
	{ if(min>score[i])
	xuehao[0]=num[i];ming[0]=name[i];min=score[i];}
for(i=1;i<=n;i++)
     {if(max<score[i])
	 xuehao[1]=num[i];ming[1]=name[i];max=score[i];}
cout<<ming[0]<<"    "<<xuehao[0]<<endl;
cout<<ming[1]<<"    "<<xuehao[1]<<endl;
}