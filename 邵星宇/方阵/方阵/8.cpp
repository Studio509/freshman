#include<iostream>
using namespace std;
void main()
{
	int a[4][4],i,j,s=0,t=1,max;
	cout<<"������16��������"<<endl;
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	cin>>a[i][j];
	cout<<endl;
	for(i=0;i<4;i++)
	{
		s=s+a[i][i];
		t=t*a[3-i][i];
	}
    max=a[0][0];
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		if(max<a[i][j])
	       max=a[i][j];
	}
	cout<<"���Խ�����Ԫ��֮�ͣ�"<<s<<endl;
	cout<<"���Խ�����Ԫ��֮����"<<t<<endl;
	cout<<"����������Ԫ�أ�"<<max<<endl;
}