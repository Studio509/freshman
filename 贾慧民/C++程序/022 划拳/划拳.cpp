#include "stdafx.h"
#include<iostream>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int x[100][4],i,j,k=0,l=0,n;
	cin>>n;//输入划拳次数
	for(i=0;i<n;i++)//输入划拳喊的和划的
		for(j=0;j<4;j++)
			cin>>x[i][j];
	for(i=0;i<n;i++)
		{  if(x[i][1]==x[i][0]+x[i][2]&&x[i][3]!=x[i][0]+x[i][2])//乙喝酒
				k++;//乙喝酒次数
	       if(x[i][3]==x[i][0]+x[i][2]&&x[i][1]!=x[i][0]+x[i][2])//甲喝酒
				l++;//甲喝酒次数
	     }
	cout<<l<<" "<<k;//输出甲、乙喝酒的次数
	return 0;
}
