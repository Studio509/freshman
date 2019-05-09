#include<iostream>
#include<iomanip>
using namespace std;
void fun(char a[5])
{
	int i,j,X,Y,max=0,a1,a2,a3,a4;
	
    for(i=0;i<4;i++)
	for(j=0;j<4-i;j++)
	if(a[j+1]>a[j])
	{
		max=a[j+1];
	    a[j+1]=a[j];
	    a[j]=max;
	}
    X=(a[0]-'0')*1000+(a[1]-'0')*100+(a[2]-'0')*10+(a[3]-'0');
    cout<<setw(4)<<a;
	for(i=0;i<4;i++)
	{
		if(i==2)
			break;
		max=a[i];
		a[i]=a[3-i];
		a[3-i]=max;
	}
	 Y=(a[0]-'0')*1000+(a[1]-'0')*100+(a[2]-'0')*10+(a[3]-'0');
     max=X-Y;
	 if(max==0)
		 cout<<" - "<<setw(4)<<a<<" = "<<"0000";
	 else
	 {cout<<" - "<<setw(4)<<a<<" = "<<setw(4)<<max<<endl;
	 if(max!=6174)
	 {  
		 a1=max/1000;
	     a2=max%1000/100;
		 a3=max%100/10;
		 a4=max%10;
		 a[0]=a1+'0';
		 a[1]=a2+'0';
		 a[2]=a3+'0';
		 a[3]=a4+'0';
		 return fun(a);
	 }
	 }
}
int main()
{   
	char a[5];
    cin>>a;
	fun(a);
	return 0;
}

