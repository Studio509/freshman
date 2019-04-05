#include<iostream>
using namespace std;
int main()
{
  int n;//输入一个正整数n.
  int nn;//记录输入的正整数n.
  int i=0;//记录稍后执行的步数.
  cout<<"请输入一个正整数n：";
  cin>>n;
  nn=n;
  while(1)
  {
    if(n%2==0)
      {
        n=n/2;
        i=i+1;
      }
    else if(n>1&&n%2!=0)
      {
        n=((3*n)+1)/2;
        i=i+1;
      }
      else if(n==1)
      {
        cout<<"把"<<nn<<"变成1所需要的步骤是："<<i<<"步。"<<endl;
		break;
      }
}
return 0;
}
