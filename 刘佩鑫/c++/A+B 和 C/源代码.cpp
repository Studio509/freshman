#include<iostream>
using namespace std;
int main()
{
  int T,i=0;
  cin>>T;
  if (T>10) return 0;
  double A,B,C;    
  while(i<T)
  {
    cin>>A>>B>>C;
    if (A+B>C) {
      cout<<"true";
    }
    else 
    {
     cout<<"Case #"<<i+1<<": false"<<endl;
    }
    i++;
  }
  
  
  return 0;
}
