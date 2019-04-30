#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	int da,db,suma=0,sumb=0,an,bn;
	cin>>a>>da>>b>>db;
	an=a.length();
	bn=b.length();
	for(int i=0;i<an;i++)
	{
		if(a[i]-'0'==da)
			suma=suma*10+da;
	}
	for(int i=0;i<bn;i++)
	{
		if(b[i]-'0'==db)
			sumb=sumb*10+db;
	}
	cout<<suma+sumb;
	return 0;
}