#include<iostream>
using namespace std;
int main()
{
	const int bu='B',chui='C',jian='J';
	int n,i,s=0,f=0,p=0;
	int num[2][3]={0};
	cin>>n;
	char t1,t2;
	for(i=0;i<n;i++)
	{
		cin>>t1>>t2;
		if(t1==bu)
		{
			if(t2==bu)
				p++;
			else if(t2==chui)
			{
				s++;
				num[0][2]++;
			}
			else if(t2==jian)
			{
				f++;
				num[1][1]++;
			} 
		}
	   else if(t1==chui)
		{
			if(t2==bu)
			{
				f++;
				num[1][2]++;
			}
			else if(t2==chui)
				p++;
			else if(t2==jian)
			{
				s++;
				num[0][0]++;
			} 
		}
		else if(t1==jian)
		{
			if(t2==bu)
			{
				s++;
				num[0][1]++;
			}
		    else if(t2==chui)
			{
				f++;
				num[1][0]++;
			}
		    else if(t2==jian)
				p++;
		}  
	}
	cout<<s<<" "<<p<<" "<<f<<endl;
	cout<<f<<" "<<p<<" "<<s<<endl;
	for(i=0;i<2;i++)
	{
		if(i==1)
			cout<<" ";
		if(num[i][0]>=num[i][1]&&num[i][0]>=num[i][2])
		{
			if(num[i][0]==num[i][2])
			{
				cout<<"B";
				break;
			}
			else
			    cout<<"C";
		}
		if(num[i][1]>=num[i][0]&&num[i][1]>=num[i][2])
		{
			if(num[i][1]==num[i][0]&&num[i][1]!=num[i][2])
			{
				cout<<"C";
				break;
			}
			else if(num[i][1]==num[i][2])
			{
				cout<<"B";
				break;
			}
			else
			cout<<"J";
		}
		if(num[i][2]>=num[i][0]&&num[i][2]>=num[i][1])
			cout<<"B";
	}
	return 0;
}