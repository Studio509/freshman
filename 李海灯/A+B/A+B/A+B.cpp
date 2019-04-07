#include<iostream>

#include<string>

using namespace std;

int  px(string a,int da)

{
  int i,sum=0;

  for(i=0;i<a.length();i++)
  
	  if(a[i]-'0'==da)

		  sum=sum*10+da;
  return sum;
}

int main()

{
   string A,B;

   int DA,DB,sum1,sum2,sum;

   cout<<"ÇëÊäÈëA,B,DA,DBµÄÖµ\n";

   cin>>A>>B>>DA>>DB;

   sum1=px(A,DA);

  sum2= px(B,DB);

  sum=sum1+sum2;

  cout<<sum;

   return 0;
}

