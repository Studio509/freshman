#include <iostream>
#include<string>
using namespace std;
int main()
{
  int n,i,j;
  int a[100],k;
  string b[100],z;
  cin>>n;
  for(i=0;i<n;i++)
    {
      cin>>a[i]>>b[i];
    }
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i;j++)
        {
          if(a[j]<a[j+1])
            {
              k=a[j];
              a[j]=a[j+1];
              a[j+1]=k;
              z=b[j];
              b[j]=b[j+1];
              b[j+1]=z;
            }
        }
  }
  system("cls");
  cout<<a[0]<<" "<<b[0]<<endl;
  cout<<a[n-1]<<" "<<b[n-1]<<endl;
  return 0;
}
