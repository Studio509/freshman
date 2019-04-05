#include<iostream>
#include<string>
using namespace std;
int main()
{   string name[1000],num[1000];
    int m,score[1000],i,max,min,max_score,min_score;//max,min表示成绩分别为最高和最低的两个学生的序号
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>name[i]>>num[i]>>score[i];
	    }//输入
	max_score=score[0];
    for(i=0;i<m;i++)
	{   
		if(max_score<=score[i])
		{   
			max_score=score[i];
			max=i;
		}
	}
	min_score=score[0];
	for(i=0;i<m;i++)
     {
        if(min_score>=score[i])
		  { 
			min_score=score[i];
			min=i;
	       }
	      }
cout<<name[max]<<" "<<num[max]<<endl;
cout<<name[min]<<" "<<num[min];
	return 0;
}
