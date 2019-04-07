#include <iostream>
 
using namespace std;
 
int main()
{
    int n;

    cin>>n;

    int a[37]={0};

    int f=0;

    while(n--)
	{
        int temp;

        int m=0;

        cin>>temp;

        while(temp)
		{
            m+=temp%10;

            temp/=10;
        }
        if(a[m]==0)
		{
            a[m]=1;

            f++;
        }
    }
    cout<<f<<"\n";

    for(int i=0,j=0;i<37;i++)
	{
        if(a[i]==1)
		{
            cout<<i;
            j++;
            if(j!=f)
			{
                cout<<" ";
            }
        }
    }
    return 0;
}
