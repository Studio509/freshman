#include<iostream>
#include<string>
using namespace std;

int main()
{   
	int x=0,N,i,j;
	string n[10];
	cin>>N;
	if(N==0)
    cout<<"No"<<endl;
	for(j=0;j<N;j++)
      cin>>n[j];
    for(j=0;j<N;j++)
	{   x=0;
		if(n[j].length()%4!=0)
		  cout<<"No"<<endl;
		else
		{
		 i=0;
		 while(i<n[j].length())
	       { 
			   if(n[j][i]!='2'||n[j][i+1]!='0'||n[j][i+2]!='5'||n[j][i+3]!='0')
			     {
					 x=1; break;
			   } 
			     i=i+4;	
		    }
		if(x==1)
        cout<<"No"<<endl;
		else
        cout<<"Yes"<<endl;
	   }
	}
	return 0;
}
