#include<iostream>
using namespace std;
#include<string>
int main()
{
    int N,M,i,j,k,l,num1=0,num2=0;
    string wb[100],cwb[100],stu;
	bool t=0;
    cin>>N>>M;             //输入学生人数N和查缴物品种类数M
    for(i=0;i<M;i++)
    cin>>wb[i];             //输入要被查缴的物品编号
    for(i=0;i<N;i++)
	{
		cin>>stu>>k;
		t=0;//输入学生姓名缩写、个人物品数量 、以及 K 个物品的编号。
	    for(j=0;j<k;j++)
		{
			cin>>cwb[j];
			for(l=0;l<M;l++)
	       {
		     if(cwb[j]==wb[l])
		     {
				 t=1;
			  break;
			 }
		    }
		}
		if(t==1)
		{
			cout<<stu<<":";
			num1++;
			for(j=0;j<k;j++)
			{
				for(l=0;l<M;l++)
				{
					if(cwb[j]==wb[l])
				    {
						cout<<" "<<cwb[j];
					    num2++;
				    }
			    }
		    }
			cout<<endl;
	    }
	}
	cout<<num1<<" "<<num2<<endl;
	return 0;
}
