#include<iostream>
using namespace std;
int main()
{char str1[100];
 char str2[50];
  int i,j;
   cout<<"�������ַ�����1��";
   cin>>str1;
   cout<<"�������ַ�����2��";
  cin>>str2;
  for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='\0')
		str1[i]=str2[0];	
	}
	for(j=0;str2[j]!='\0';j++)
	{
	    str1[i+j]=str2[j];
	}
	str1[i+j]='\0';
	cout<<"�����ַ��������Ӻ�Ϊ��"<<endl;
	cout<<str1<<endl;

}