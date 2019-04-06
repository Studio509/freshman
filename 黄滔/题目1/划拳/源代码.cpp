#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cup1,cup2,N,row1[100],row2[100],call1[100],call2[100],score1=0,score2=0;
	cin>>N;
	for(int i=0;i<N;i++)//甲喊 甲划 乙喊 乙划
	{cin>>call1[i]>>row1[i]>>call2[i]>>row2[i];}
	for(int i=0;i<N;i++)//划出的数字正好等于两人喊出的数字之和
		{
			if(row1[i]==call1[i]+call2[i])
				score2++;
        if(row2[i]==call1[i]+call2[i])
				score1++;
			if(row1[i]==row2[i]&&row1[i]==call1[i]+call2[i])
			{score1--;score2--;}
	    }
	cout<<score1<<" "<<score2;
	return 0;
}
