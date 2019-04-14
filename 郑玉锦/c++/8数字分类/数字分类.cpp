#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,i,a1=0,a2=0,a3=0,a5=0,x[100],j=1,k=0;
	double a4=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i];
	for(i=0;i<n;i++)
	{
		if(x[i]%5==0&&x[i]%2==0)
			a1=a1+x[i];
		else if(x[i]%5==1)
		{
			if(j%2==1)
				a2=a2+x[i];
			else
				a2=a2-x[i];
			j=j+1;
		}
		else if(x[i]%5==2)
			a3=a3+1;
		else if(x[i]%5==3)
			{
				k=k+1;
				a4=a4+x[i];
		    }
		else if(x[i]%5==4)
			if(x[i]>a5)
				a5=x[i];
	}
	if(k==0)
		a4=0;
	else
	    a4=a4/k;
	system("cls");
	if(a1==0)
		cout<<"N"<<" ";
	else
		cout<<a1<<" ";
	if(a2==0)
		cout<<"N"<<" ";
	else
		cout<<a2<<" ";
	if(a3==0)
		cout<<"N"<<" ";
	else
		cout<<a3<<" ";
	if(a4==0)
		cout<<"N"<<" ";
	else
		cout<<fixed<<setprecision(1)<<a4<<" ";//cout<<setiosflags(ios::fixed)<<setprecision(1)<<a4<<" ";
	if(a5==0)
		cout<<"N";
	else
		cout<<a5;
	
	return 0;
}
