#include <iostream>
using namespace std;
int main()
{char stra[100],strb[100],str[200];
int i,j;
cout<<"请输入一个字符串：";
cin>>stra;
cout<<"请再输入一个字符串：";
cin>>strb;
for(i=0;stra[i]!='\0';i++)
	str[i]=stra[i];
for(j=0;strb[j]!='\0';j++)
	str[j+i]=strb[j];
str[i+j]='\0';
cout<<"合并后的字符串为：";
cout<<str<<endl;
return 0;
}
