#include<iostream>
using namespace std;
int main()
{int n,i,a[10][3],j;
 cin>>n;
 for(i=1;i<=n;i++)
	{ for(j=1;j<=3;j++)
	  cin>>a[i][j];
    }
  for(i=1;i<=n;i++)
  {
	  if((a[i][1]+a[i][2])>a[i][3])
	  { cout<<"Case #"<<i<<": true";
	      cout<<endl;
	    }
	  else
		 { cout<<"Case #"<<i<<": false";
	       cout<<endl;
	  }
  }
 return 0;
}
