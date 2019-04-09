#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s[10];
	int i,j,star=0,size,m;
	  cin>>size;
	    for(j=0;j<size;j++)
	      cin>>s[j];
	    for(j=0;j<size;j++)//大循环
		{   m=0;star=0;
	       for(i=0;i<s[j].length();i++)////第一个条件每个是否含有PAT以外
	          {
			   if(s[j][i]=='P'||s[j][i]=='A'||s[j][i]=='T') 
	             m++;
			     }
		     if(m==s[j].length())
		   {   for(i=0;i<s[j].length();i++)
		      {
				  if(s[j][i]=='P'&&s[j][i+1]=='A'&&s[j][i+2]=='T')//第二个条件
			        { star=1; break;}
                  if(s[j][i]=='P'&&s[j][i+1]=='A'&&s[j][i+2]=='A'&&s[j][i+3]=='T')//第二个条件
			        { star=1; break;}   
		         }
		   }
           if(star==0)
		      cout<<"NO"<<endl;
		   if(star==1)
               cout<<"YES"<<endl;
		}
	   
    return 0;
}
