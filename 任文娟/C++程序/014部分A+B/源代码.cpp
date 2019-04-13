#include<iostream>
using namespace std;
#include<string>
int main()
{
    int Da,Db,i,j,sum1=0,sum2=0,Pa,Pb;
    int count1=1,count2=1;
    string A,B;
    cin>>A>>Da>>B>>Db;
    for(i=0;i<A.length();i++)
    {
        if(A[i]-'0'==Da)
		{
			sum1=sum1+Da*count1;
            count1=count1*10;
		}
    }
    for(j=0;j<B.length();j++)
    {
        if(B[j]-'0'==Db)
		{
			sum2=sum2+Db*count2;
            count2*=10;
		}
    }
    cout<<sum1+sum2<<endl;
    return 0;
}
