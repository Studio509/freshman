#include <iostream>
using namespace std;
int main()
{
    int n,j,i;
    cout<<"请输入行数:";
    cin>>n;
    for(i=n;i>0;i--)
     {
         for(j=0;j<n-i;j++)
         {
             cout << " ";
         }
          cout << "*";
         for(j=1;j<2*i-2;j++)
         {
             cout << " ";
         }
         if(i==1) ;
         else cout << "* \n";
       
     }
}
