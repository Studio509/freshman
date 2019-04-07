#include<iostream>
#include<string>
using namespace std;
void output(int P[])
{   
	int max,i,star=0;
    max=P[0];
    for(i=0;i<3;i++)
	 {
		if(P[i]>max)
	    {
		max=P[i];
	    star=i;
		}
	  }
	switch(star)
	{
		case 0:cout<<"B";break;
        case 1:cout<<"C";break;
        case 2:cout<<"J";break;
	}
}
int main()
{   
	int N,i,sco1[3]={0,0,0},j[3]={0,0,0},y[3]={0,0,0};//作用：j[3]={B,C,J},y[3]表示甲乙赢时的手势
    int *p1=j,*p2=y;
	char J[104],Y[104];
    cin>>N;
	for(i=0;i<N;i++)
	{
	    cin>>J[i]>>Y[i];
	                   }//锤子剪子布；C>J>B>C
    for(i=0;i<N;i++)
	{  
	    if((J[i]=='J'&&Y[i]=='B')||(J[i]=='B'&&Y[i]=='C')||(J[i]=='C'&&Y[i]=='J'))//甲赢；
		{
			sco1[0]++;
		    if(J[i]=='J')
				j[2]++;
            if(J[i]=='B')
				j[0]++;
            if(J[i]=='C')
				j[1]++;
		}
			
		if(J[i]==Y[i])//平局
		  sco1[1]++;
		if((Y[i]=='J'&&J[i]=='B')||(Y[i]=='B'&&J[i]=='C')||(Y[i]=='C'&&J[i]=='J'))         //乙赢
	    { 
		  if(Y[i]=='C')
	        y[1]++;
	      if(Y[i]=='B')
	        y[0]++;
	      if(Y[i]=='J')
		    y[2]++;
	      sco1[2]++;
	      }
	  }
	 for(i=0;i<3;i++)
	    cout<<sco1[i]<<" ";
	 cout<<endl;
     for(i=2;i>=0;i--)
	    cout<<sco1[i]<<" ";
     cout<<endl;
	 output(p1);
	 cout<<" ";
     output(p2);
     cout<<" ";
	return 0;
}
