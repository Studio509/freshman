#include <iostream>    
#include <string>
using namespace std;   
typedef struct
{ 
	int xy;
	string name; 
}stu;
int main(void)
{   
	int n;
	cin>>n;  
	stu t,max,min;
	int x,y;
	for(int i=0;i<n;++i)
	{
		cin>>t.name>>x>>y; 
		t.xy = x*x + y*y;
		if(i==0)
		{
			max = t;
			min = t;
		}
		else
		{
			if(max.xy<t.xy)
			{
				max = t;
			}
			if(min.xy>t.xy)
			{
				min = t;
			}
		}  
	}
	cout<<min.name<<" "<<max.name<<endl;
	return 0;
}
