#include <iostream>     
using namespace std;
int main(void)
{    
	int n; cin>>n; 
	int sum1=0,sum2=0;
	int a1,a2,b1,b2;
	int total;
	for(int i=0;i<n;++i)
  { 
		cin>>a1>>a2>>b1>>b2;
		total = a1+b1;
 
		if(total==a2 && total==b2)
    { 
		}
    else if(total==a2)
    {
			++sum2;
		}
    else if(total==b2)
    {
			++sum1;
		} 
	}
	cout<<sum1<<" "<<sum2<<endl;
	return 0;
}
