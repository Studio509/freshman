#include<iostream>
using namespace std;
#include<string>
int main()
{
	string a;
    int len,i,j,b[7]={0};
	cin>>a;
    len=a.length();
    for(i=0;i<len;i++)
    {
        switch(a[i])
        {
            case 'P':b[0]++;break;
            case 'A':b[1]++;break;
            case 'T':b[2]++;break;
            case 'e':b[3]++;break;
            case 's':b[4]++;break;
            case 't':b[5]++;break;
            default:break;
        }
    }
    int max=0;
    max=b[0];
    for(i=0;i<6;i++)
    {
        if(max<b[i])
           max=b[i];
    }
    for(i=0;i<max;i++)
	{
		for(j=0;j<6;j++)
		{
			if(b[j])
			{
			   switch(j)
			   {
          case 0:cout<<'P';b[0]--;break;
			    case 1:cout<<'A';b[1]--;break;
			    case 2:cout<<'T';b[2]--;break;
			    case 3:cout<<'e';b[3]--;break;
			    case 4:cout<<'s';b[4]--;break;
			    case 5:cout<<'t';b[5]--;break;
			    default:break;
			    }
			}
		}
	}
    return 0;
}
