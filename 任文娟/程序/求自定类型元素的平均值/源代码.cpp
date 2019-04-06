#include <iostream>
using namespace std;
typedef float ElementType;
ElementType Average(ElementType s[],int n)
{
  int i;
  float ave,sum=0;
  for(i=0;i<n;i++)
     sum=sum+s[i];
  ave=sum/n;
  return ave;
}
int main()
{
  int i,n;
  float a,s[100];
  cout<<"请输入数组元素个数:";
  cin>>n;
  cout<<"请输入数组元素:";
  for(i=0;i<n;i++)
     cin>>s[i];
  a=Average(s,n);
  cout<<"平均值为:"<<a<<endl;
  return 0;
}
