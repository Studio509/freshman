#include<iostream>
using namespace std;
#include<string>
void pinyin(int n)
{
	switch(n)
	{
	case 0:cout<<"ling";break;
	case 1:cout<<"yi";break;
	case 2:cout<<"er";break;
	case 3:cout<<"san";break;
	case 4:cout<<"si";break;
	case 5:cout<<"wu";break;
	case 6:cout<<"liu";break;
	case 7:cout<<"qi";break;
	case 8:cout<<"ba";break;
	case 9:cout<<"jiu";break;
	default:break;
	}
}
int main()
{
    char m[100];
	int i,a,b,c,sum=0;
	cin>>m;
	for(i=0;i<strlen(m);i++)
	{
	  sum=sum+m[i]-48;
	}
	a=sum%10;
	b=sum/10%10;
	c=sum/100;
	if(c!=0)
	{
		pinyin(c);
		cout<<" ";
	}
	pinyin(b);
	cout<<" ";
	pinyin(a);
	cout<<endl;
	return 0;
}
