#include <iostream>
using namespace std;
int findmax(int A[3][4],int B[2])
{
	int i,j,max,r=0,c=0;
	max=A[r][c];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(A[i][j]>max)
			{
				r=i,c=j;
				max=A[r][c];
			}
			B[0]=r,B[1]=c;
			return max;
}
int main()
{
	int A[3][4]={{7,5,-2,4},{5,1,9,7},{3,2,-1,6}},B[2],max;
	max=findmax(A,B);
	cout<<"max:A["<<B[0]<<"]["<<B[1]<<"]="<<max<<endl;
	return 0;
}
