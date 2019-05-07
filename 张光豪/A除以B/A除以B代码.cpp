#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int b=0,k,i,shu=0;
    cin>>a>>b;
	k=a.length();
    for(i=0;i<k;i++)
	{
        shu=(a[i]-'0')+shu*10;
        if(shu>=b) 
            cout<<shu/b;
        else
		{
			if(i!=0)
            cout<<0;
		}
        shu=shu%b;
    }
    cout<<" "<<shu;
    return 0;
}