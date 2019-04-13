#include<iostream>
using namespace std;
void hw(char *s,int n)
{
	int i;         
	    for (i=0; i<n/2; i++) 
		{
			if(*(s+i)==*(s+n-i-1))
				{cout<<"是回文"<<endl;}
			else
				{cout<<"不是回文"<<endl;break;}
		}}
int main()
{
	char a[100];int i,j,k;
	cout<<"请输入字符数组个数:";
	cin>>k;
cout<<"请输入字符数组：";
for(i=0;i<k;i++)
	cin>>a[i];
hw(a,k);
return 0;
}
