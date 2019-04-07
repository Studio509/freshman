#include<iostream>
#include<string>
using namespace std;
void main()
{   
	string name[10],num[10];
    int m,score[10],i,max,min,max1,min1;
	cin>>m;
	for(i=0;i<m;i++)
		cin>>name[i]>>num[i]>>score[i];
	max1=score[0];
    for(i=0;i<m;i++)
	{   
		if(max1<=score[i])
		{   
			max1=score[i];
			max=i;
		}
	}
	min1=score[0];
	for(i=0;i<m;i++)
     {
        if(min1>=score[i])
		  { 
			min1=score[i];
			min=i;
	       }
	  }
	cout<<name[max]<<" "<<num[max]<<endl;
	cout<<name[min]<<" "<<num[min];
}
