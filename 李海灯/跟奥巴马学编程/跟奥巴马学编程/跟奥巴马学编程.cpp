//#include<iostream>
//
//#include<string>
//
//using namespace std;
//
//int main()
//{
// int a;
// 
// int i,c=0,j;
//
// string b;
//
// cin>>a>>b;
//
// for(i=1;i<a;i++)
//	 
//	{
//	cout<<b;
//
//	c=c+1;
//
//	if(c/a==1)
//
//	cout<<endl;
//    }
//	for(j=1;j<a*0.5;j++)
//	 
//	cout<<b;
//		 
//       
//     
// return 0;
//}
#include<iostream>

#include<cmath>

using namespace std;

int main()
{
	char ch;

	int n;
	
	cin>>n>>ch;
	
	int hang=n/2;
	
	for(int i=1;i<=hang;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==1||i==hang)
				cout<<ch;
			else
			{
				if(j==0||j==n-1)

				cout<<ch;

				else

				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
} 
