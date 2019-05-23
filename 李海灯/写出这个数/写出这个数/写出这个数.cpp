#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,i,sum=0;
	int j=0,m[100];
    string n;
    cin>>n;
	a=n.size();
	for(i=0;i<a;i++)
	{
		sum=sum+n[i]-48;
	}
	while(sum)
	{
	m[j]=sum%10;
	sum=sum/10;
	j++;
	}
	for(j=j;j>=0;j--)
		switch(m[j])
	{
		case 0:cout<<"ling"<<" ";break;
	    case 1:cout<<"yi"<<" ";break;
		case 2:cout<<"er"<<" ";break;
		case 3:cout<<"san"<<" ";break;
		case 4:cout<<"si"<<" ";break;
		case 5:cout<<"wu"<<" ";break;
		case 6:cout<<"liu"<<" ";break;
		case 7:cout<<"qi"<<" ";break;
		case 8:cout<<"ba"<<" ";break;
		case 9:cout<<"jiu"<<" ";break;
	}
	return 0;
}
