#include <iostream>
using namespace std;
typedef float ElementType;
ElementType max(ElementType s[],int n)
{
	int i,t;
	float max;
	max=s[0];
	for(i=1;i<n;i++)
		if(s[i]>max)
		{
			max=s[i];
			t=i;
		}
	return s[t];
}
int main()
{
  int i,n;
  float s[100];
  cout<<"请输入数组元素个数:";
  cin>>n;
  cout<<"请输入数组元素:";
  for(i=0;i<n;i++)
	  cin>>s[i];
  cout<<"最大值为:"<<max(s,n)<<endl;
  return 0;
}
