#include<iostream>
#include<string>
using namespace std;
int main()
{    
	int a,b=0,i,j,flag=0;
	string sell,want;
	cin>>sell>>want;//判断sell是否包含buy；包含多几个；不包含少几个（buy）；
	for(j=0;j<want.length ();j++)
	{
       for(i=0;i<sell.length ();i++)
	   {
	if(sell[i]==want[j])
	{
		flag++;
		sell[i]='*';
		break;
	}

	   }
	}a=want.length ()-flag;
	if(flag==want.length())
	{b=1;a=sell.length ()-want.length ();}
	if(b==0)
	cout<<"No"<<" "<<a;
	if(b==1)
    cout<<"Yes"<<" "<<a;
	return 0;
}
