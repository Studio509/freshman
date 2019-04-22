#include<iostream>
using namespace std;
int main()
{
  int n,hang,lie;
  char b;
  cin>>n>>b;
  lie = n;
  hang = (n+1)/2;
  for(int i=0;i<hang;i++){
    for(int j=0;j<lie;j++){
      if(i==0||i==hang-1) {
        cout<<b;
        if(j==lie-1) cout<<endl;
      }
      else{
        if(j==0) cout<<b;
        else if(j==lie-1) cout<<b<<endl;
        else cout<<" ";
      }
    }
  }
  return 0;
}
