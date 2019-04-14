#include<iostream>
using namespace std;
int main()
{
  int N,M,sum[1000],k=0,j,i,Max=-1;
  int s[1000],c=0;
	int a[M][N];
	cout<<"请输入月饼的种类数";
    cin>>N;
	cout<<"请输入参与统计的城市数量";
	cin>>M;
    for ( i=0;i<M;i++)
    {
        for ( j=0;j<N;j++)
        {
            cin>>a[i][j];
 
        }
    }
    for (j=0;j<N;j++) 
   {
        for (i=0;i<M;i++)  
     {
        sum[k]+=a[i][j];
     }
     k++;//
   }
   int max1=sum[0];
   for (i=0;i<k;i++)
   {
       if (sum[i]>=max1)
       {
           max1=sum[i];
       }
   }
     cout<<max1<<endl;
   for (i=0;i<k;i++)
   {
       if (sum[i]==max1)
       {
           s[c++]=i+1;
       }
   }
 for ( i=0;i<c-1;i++)
   {
       cout<<s[i]<<' ';
   }
   cout<<s[c-1];
   return 0;
}
