#include <iostream>
using namespace std; 
int main()
{ 
  int n,m; 
  int a[100]; 
  cout<<"请输入要输入数字的个数";
  cin>>n;
  cout<<"请输入右移的个数m";
  cin>>m; 
  cout<<"右移m位以后的整数序列";
  for(int i = 0; i < n; i++)
  { 
	  cin>>a[i]; 
  } 
  for(int i = 0; i < m; i++)
  { 
	  int t = a[n-1]; 
  for(int j = n-2; j >= 0; j--) 
  { 
	  a[j+1] = a[j]; } a[0] = t;
  }
  for(int i = 0; i < n; i++) 
  { 
	  if(i == 0) { cout<<a[i];
	  } 
  else cout<<" "<<a[i];
  } 
  cout<<endl;
  return 0;
}
