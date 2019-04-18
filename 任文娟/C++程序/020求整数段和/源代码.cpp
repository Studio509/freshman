#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int a,b,i,j,n=0,sum=0;
    cin>>a>>b;
	  j=b-a+1;
    for(i=a;i<=b;i++)
    {
        cout<<setiosflags(ios::right)<<setw(5)<<i;
		    n++;
        if(j%n==5)
          cout<<endl;
        sum=sum+i;
    }
    cout<<"\nSum="<<sum<<endl;
    return 0;
}
