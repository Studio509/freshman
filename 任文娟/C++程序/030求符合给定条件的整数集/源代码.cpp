#include<iostream>
using namespace std;
int main()
{
	  int A;
    cin>>A;
    int a[4],i,j,k,count=0;
    for(i=0;i<4;i++)
       a[i]=i+A;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                if(i!=j&&j!=k&&i!=k)
                {
                    count++;
                    if(count%6==0)
                       cout<<a[i]<<a[j]<<a[k]<<"\n";
                    else
                       cout<<a[i]<<a[j]<<a[k]<<" ";
                }
            }
        }
    }
    return 0;
}
