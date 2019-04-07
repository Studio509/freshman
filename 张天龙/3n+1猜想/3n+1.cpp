#include <iostream>

using namespace std;

void main()

{

  int n,i;

  cout<<"请输入一个小于1000的正整数：";

  cin>>n;

  for(i=1;;i++)

  {

    if(n%2==0)

		  n=n/2;

	  else if(n==1)

		  break;

    else

		  n=(3*n+1)/2;

  }

  cout<<i;

}
