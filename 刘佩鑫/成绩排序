#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void add_examination();//录入学生成绩
void show_examination();//输出学生成绩单
void sort_examination();//根据成绩进行排序
struct student
{
string name[100];
string xh[100];
int examination[100];
}stdd[100];
int jw,p=0,u=0;
fstream file1;//学生数据记录
fstream file2;//次数数据记录
fstream file3;//次数数据记录
void add_examination()//录入学生成绩
{
	int i;
	cout<<"---------------------------------------------"<<endl;
	cout<<"\t为几位学生录入成绩";
	cin>>jw;
	file3.open("test3.txt",ios::in);
	file3>>u;
	file3.close();
	file3.open("test3.txt",ios::out);
	u=u+jw;
	file3<<u;
	file3.close();
	cout<<"---------------------------------------------"<<endl;
	cout<<"\t姓名"<<"\t\t学号"<<"\t\t成绩"<<endl<<"\t";
	file2.open("test2.txt",ios::in);
	file2>>p;
	file2.close();
	for(i=p;i<u;i++)	
	cin>>stdd[i].name[i]>>stdd[i].xh[i]>>stdd[i].examination[i];
	file1.open("test1.txt",ios::app);
	for(i=p;i<u;i++)
	file1<<stdd[i].name[i]<<" "<<stdd[i].xh[i]<<" "<<stdd[i].examination[i]<<" ";
	file1.close();
	file2.open("test2.txt",ios::out);
	p=p+jw;
	file2<<p;
	file2.close();
}
void show_examination()//输出学生成绩单;
{
	int j;
	cout<<"---------------------------------------------"<<endl;
	cout<<"\t学生成绩单"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"\t姓名:"<<"\t\t学号:"<<"\t\t成绩"<<endl;
	file2.open("test2.txt",ios::in);
	file2>>p;
	file2.close();
	file1.open("test1.txt",ios::in);
	for(j=0;j<p;j++)
	file1>>stdd[j].name[j]>>stdd[j].xh[j]>>stdd[j].examination[j];
	file1.close();
	for(j=0;j<p;j++)
		cout<<"\t"<<stdd[j].name[j]<<"\t\t"<<stdd[j].xh[j]<<"\t\t"<<stdd[j].examination[j]<<endl;
	cout<<"---------------------------------------------"<<endl;
}
void sort_examination()//根据成绩进行排序
{
	cout<<"---------------------------------------------"<<endl;
	int s,f,k,z;
	string t,x;
	file2.open("test2.txt",ios::in);
	file2>>p;
	file2.close();
	file1.open("test1.txt",ios::in);
	for(f=0;f<p;f++)
	file1>>stdd[f].name[f]>>stdd[f].xh[f]>>stdd[f].examination[f];
	file1.close();
	for(s=1;s<=p-1;s++)
	
		for(f=0;f<p-s;f++)

			if(stdd[f].examination[f]>stdd[f+1].examination[f+1])
		     {
				 t=stdd[f].name[f]; stdd[f].name[f]=stdd[f+1].name[f+1];  stdd[f+1].name[f+1]=t;
	             z=stdd[f].examination[f];  stdd[f].examination[f]=stdd[f+1].examination[f+1];   stdd[f+1].examination[f+1]=z;
	             x=stdd[f].xh[f];  stdd[f].xh[f]=stdd[f+1].xh[f+1];  stdd[f+1].xh[f+1]=x;
	          }
			cout<<"排序后"<<endl;
			cout<<"---------------------------------------------"<<endl;
			cout<<"\t姓名:"<<"\t\t学号:"<<"\t\t成绩"<<endl;
			for(k=p-1;k>=0;k--)
            cout<<"\t"<<stdd[k].name[k]<<"\t\t"<<stdd[k].xh[k]<<"\t\t"<<stdd[k].examination[k]<<endl;
			cout<<"---------------------------------------------"<<endl;
}
int main()
{   
	int a;
	do
	{
	cout<<"*********************************学生成绩管理系统*********************************"<<endl<<'\n';
    cout<<"\t\t\t\t1录入学生成绩"<<endl;
	cout<<"\t\t\t\t2输出学生的成绩单"<<endl;
	cout<<"\t\t\t\t3根据成绩进行排序"<<endl;
	cout<<"\t\t\t\t4退出"<<endl<<'\n';
	cout<<"**********************************************************************************"<<endl;
	cout<<endl<<"\t\t\t请输入1-4之间的数选择需要的操作：";
	int option;
	cin>>option;	
	switch(option)
	{
	case 1:system("cls");cout<<"\t录入学生成绩"<<endl;
		add_examination();
		break;
	case 2:system("cls");cout<<"\t输出学生的成绩单"<<endl;
		show_examination();
		break;
    case 3:system("cls");cout<<"\t根据成绩进行排序"<<endl;
		sort_examination();
		break;
	case 4:system("cls");cout<<"退出";break;
    }
	cout<<"输入1     返回主菜单"<<endl<<"输入0     退出";
	cin>>a;system("cls");
	}
	while(a==1);
	return 0;	
}
