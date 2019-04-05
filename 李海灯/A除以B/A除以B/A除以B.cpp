#include<iostream>

#include<string>

using namespace std;

int main()

{
  int A,B,Q,R;

  cout<<"ÇëÊäÈëAºÍB\n";
  
  cin>>A>>B;

  R=A%B;

  Q=(A-R)/B;

  cout<<Q<<" "<<R;

 return 0;
}