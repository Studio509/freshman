#include <iostream>
using namespace std;
int main(void)
{
	int N[100]; 
	int M[100];
	int main() ;
		int n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++)	
			cin>>N[i];
		for(int i=0;i<m;i++)
			cin>>M[i];
		int t;
while(n--)
{		
	int mark=0;	
	for(int i=0;i<m;i++)
	{		
		cin>>t;    
		if(t==N[i])
			mark+=M[i];	
	}	
	cout<<mark<<endl;
 }
      return 0;
}
