#include<iostream>
#include<string>
using namespace std;
int main()
{   string ch[4];
    string s;
	int N,a[1000],j=0;
	cin>>N;
	for(int i=0;i<N;i++)
	{   
		for(int j=0;j<4;j++)
	   { 
		   cin>>ch[j];
	       if(ch[j][2]=='T')
			{
				if(ch[j][0]=='A')
				{ 
					cout<<"1";continue;
				}
                    if(ch[j][0]=='B')
				{
					cout<<"2";continue;
					}
			    if(ch[j][0]=='C')
				{
					cout<<"3";continue;
				}
			   if(ch[j][0]=='D')
				 {  
					 cout<<"4";continue;
			     }
	          }
       
		}}
	return 0;
}
