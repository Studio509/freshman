#include<iostream>
#include<string>
using namespace std;

int main()
{   
	string s1,s2,s3,s4;
	int i,l,l1,l2,flag;
	cin>>s1>>s2>>s3>>s4;
	l1=s1.length();l2=s2.length();
	if(l1<l2)
		l=l1;
	else
		l=l2;
	flag=1;
	for(i=0;i<l;i++)
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='Z')
		{     if(flag==1)
			{switch(s1[i])
              {
			case 'A':cout<<"MON ";break;
			case 'B':cout<<"TUE ";break;
			case 'C':cout<<"WED ";break;
			case 'D':cout<<"THU ";break;
			case 'E':cout<<"FRI ";break;
			case 'F':cout<<"SAT ";break;
			case 'G':cout<<"SUN ";break;
             }
			flag=0;
		}
        if(flag==0&&s1[i]==s2[i])//65 78
	   {  
		 if(s1[i]>='0'&&s1[i]<='9')
			{ cout<<"0"<<s1[i];break;}
		 if(s1[i]>=65&&s1[i]<=78)
		 {cout<<s1[i]-54;break;}
		 
		}
	}
	l1=s3.length();l2=s2.length();
	if(l1<l2)
		l=l1;
	else
		l=l2;
	for(i=0;i<l;i++)
		if(s3[i]==s4[i]&&s1[i]>='A'&&s1[i]<='z')
			{
				if(i>9)
				cout<<":"<<i;
	            if(i<=9)
				cout<<":0"<<i;
				break;
		     }
	return 0;
}


