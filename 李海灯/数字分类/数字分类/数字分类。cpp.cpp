#include<iostream>

#include<string>

using namespace std;

#define maxsize 100 

int main()
{
    int N,realsize,n=0,i,a[maxsize];
	
	int A1=0,A2=0,A3=0,A4=0,A5=0,A=0;

	cout<<"请输入数字个数\n";

	cin>>N;

	cout<<"输入数字\n";

	for(int i=0;i<N;i++)
	
	    cin>>a[i];
	
for(i=0;i<N;i++)
{

	if(a[i]%5==0)
	 {
	  if(a[i]%2==0) 
	   
		  A1=A1+a[i];
	 }
}
for(i=0;i<N;i++)
{
    if(a[i]%5==1)
	{
		 A3=A3+a[i];
	    A3=-A3;
	}
}
for(i=0;i<N;i++)
{
if(a[i]%5==2)
	{
	  A2++;
	}
}
for(i=0;i<N;i++)
{
	if(a[i]%5==3)
	{
		n=n+1;

	   A=a[i]+A;

	  A3=A/n;
	}
}
for(i=0;i<N;i++)
{
	if(a[i]%5==4)
	{
     int max=0;

	 if(a[i]>max)

	   max=a[i];
	}

}
 cout<<A1<<" "<<A2<<" "<<A3<<" "<<A4<<" "<<A5;
return 0;
}