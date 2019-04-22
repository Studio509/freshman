#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string n;//定义一个字符串
	cin>>n;
	int a;//记录字符串的长度
	int b[100000];//记录c的每一位数字
	int c=0;//记录a转化为数字后的和
	int x=0;//记录0的个数
	int y=0;//记录1的个数
	a=n.length();
	int i;//循环用
	for(i=0;i<a;i++)
	{
		switch(n[i])
		{
		    case 'a':c=c+1;break;
			case 'A':c=c+1;break;
			case 'b':c=c+2;break;
			case 'B':c=c+2;break;
			case 'c':c=c+3;break;
			case 'C':c=c+3;break;
			case 'd':c=c+4;break;
			case 'D':c=c+4;break;
			case 'e':c=c+5;break;
			case 'E':c=c+5;break;
			case 'f':c=c+6;break;
			case 'F':c=c+6;break;
			case 'g':c=c+7;break;
			case 'G':c=c+7;break;
			case 'h':c=c+8;break;
			case 'H':c=c+8;break;
			case 'i':c=c+9;break;
			case 'I':c=c+9;break;
			case 'j':c=c+10;break;
			case 'J':c=c+10;break;
			case 'k':c=c+11;break;
			case 'K':c=c+11;break;
			case 'l':c=c+12;break;
			case 'L':c=c+12;break;
			case 'm':c=c+13;break;
			case 'M':c=c+13;break;
			case 'n':c=c+14;break;
			case 'N':c=c+14;break;
			case 'o':c=c+15;break;
			case 'O':c=c+15;break;
			case 'p':c=c+16;break;
			case 'P':c=c+16;break;
			case 'q':c=c+17;break;
			case 'Q':c=c+17;break;
			case 'r':c=c+18;break;
			case 'R':c=c+18;break;
			case 's':c=c+19;break;
			case 'S':c=c+19;break;
			case 't':c=c+20;break;
			case 'T':c=c+20;break;
			case 'u':c=c+21;break;
			case 'U':c=c+21;break;
			case 'v':c=c+22;break;
			case 'V':c=c+22;break;
			case 'w':c=c+23;break;
			case 'W':c=c+23;break;
			case 'x':c=c+24;break;
			case 'X':c=c+24;break;
			case 'y':c=c+25;break;
			case 'Y':c=c+25;break;
			case 'z':c=c+26;break;
			case 'Z':c=c+26;break;
		}
	}
	while(1)
	{
		a=c%2;
		if(a==0)
			x=x+1;
		if(a==1)
			y=y+1;
		c=c/2;
		if(c==0)
			break;
	}
	system("cls");
	cout<<x<<" "<<y<<endl;
	return 0;
}
