#include <iostream>
using namespace std;
#include<string>
#define Maxsize 100
int main()
{
  string name[Maxsize],birthday[Maxsize],sex[Maxsize],phonenum[Maxsize],guhuanum[Maxsize];
  int N,i;
	cin>>N;
	for(i=0;i<N;i++)
		cin>>name[i]>>birthday[i]>>sex[i]>>guhuanum[i]>>phonenum[i];
	int k,t,j,n[100];
	cin>>k;
  for(j=0;j<k;j++)
    cin>>n[j];
  for(j=0;j<k;j++)
  {
   if(n[j]<N&&n[j]>=0)
	 {
		t=n[j];
		cout<<name[t]<<" "<<guhuanum[t]<<" "<<phonenum[t]<<" "<<sex[t]<<" "<<birthday[t]<<endl;
	 }
	  else
			cout<<"No Found"<<endl;   
  }
    return 0;
}
