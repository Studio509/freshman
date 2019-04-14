#include <iostream>  
#include <string> 
using namespace std;
bool isprime(long long x)// 判断是否为素数
{
    if(x==0 || x==1)
	{
        return false;
    }
    for(int i=2;i*i<=x;++i)
	{
        if(x%i==0)
		{
            return false;
        }
    }
    return true;
} 
int main(void)
{      
    long long n,k,out=-1;
    string s;
    cin>>n>>k>>s; 
    for(int i=k;i<=n;++i)
	{
        long long t = stoi(s.substr(i-k,k)); 
        if(isprime(t))
		{ // 判断素数
            out=i-k;
            break;
        }
    } 
    if(out != -1)
	{ 
        cout<<s.substr(out,k)<<endl;
    }
	else
	{
        cout<<"404"<<endl;
    }
    return 0;
}
