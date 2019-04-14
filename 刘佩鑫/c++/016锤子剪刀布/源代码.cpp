#include <iostream> 
using namespace std;
int main(void)
{ 
	const int bu='B',chui='C',jian='J'; 
	const char x[3]={'B','C','J'};
	int n;  cin>>n; 
	char t1,t2; 
	int s=0,p=0,f=0;
	int sum[2][3]={0};
	for(int i=0;i<n;++i)
	{  
		cin>>t1>>t2; 
		if(t1==bu)
		{
			if(t2==bu)
			{
				++p;
			}
			else if(t2==chui)
			{
				++s; ++sum[0][0];
			}
			else if(t2==jian)
			{
				++f; ++sum[1][2];
			} 
		}
		else if(t1==chui)
		{
			if(t2==bu)
			{
				++f;  ++sum[1][0];
			}
			else if(t2==chui)
			{
				++p;
			}
			else if(t2==jian)
			{
				++s;  ++sum[0][1];
			} 
		}
		else if(t1==jian)
		{
			if(t2==bu)
			{
				++s; ++sum[0][2];
			}
			else if(t2==chui)
			{
				++f; ++sum[1][1];
			}
			else if(t2==jian)
			{
				++p;
			}  
		}  
	}
 
	cout<<s<<" "<<p<<" "<<f<<endl;
	cout<<f<<" "<<p<<" "<<s<<endl;
	int max[2] = {0};
	for(int i=0;i<2;++i)
	{
		if(sum[i][0]>=sum[i][1])
		{
			if(sum[i][0]>=sum[i][2])
			{
				max[i] = 0;
			}
			else
			{
				max[i] = 2;
			}
		}
		else
		{
			if(sum[i][1]>=sum[i][2])
			{
				max[i] = 1;
			}
			else
			{
				max[i] = 2;
			}
		}
	}
	cout<<x[max[0]]<<" "<<x[max[1]];	 
	return 0;
}
