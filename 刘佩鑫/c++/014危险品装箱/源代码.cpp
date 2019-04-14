#include<iostream> 
using namespace std;
int main()
{ 
	int cp[10000+5][2]; 
	int n,m; 
	cin>>n>>m; 
	for(int i=0;i<n;i++)//存储每对不相容物品 
	{ 
		cin>>cp[i][0]>>cp[i][1]; 
	} 
	for(int i=0;i<m;i++)
	{ 
		int k; 
		int list[1000+5];
		bool flag=true; 
		cin>>k; 
		for(int j=0;j<k;j++)// 存储每张清单 
		{ 
			cin>>list[j];
		} 
		for(int j=0;j<n;j++)// 遍历每个不相容物品的第一个数
		{ 
			for(int ii=0;ii<k;ii++)// 遍历清单中每个数 
			{ 
				if(cp[j][0]==list[ii])// 如果第一个数相当，遍历查找是否第二个数也相等
				{
					for(int jj=0;jj<k;jj++)
					{ 
						if(cp[j][1]==list[jj]) // 第一、第二个数都相等，说明清单不安全
							flag=false; } } } } 
		cout<<((flag)?"Yes":"No")<<endl; 
	} 
	return 0;
}
