 #include<iostream>
using namespace std;
int main()
{
	    char str[100];
	    int i,j=0;
	    cout<<"������һ���ַ���"<<endl;
	    cin>>str;
	    for(i=0;i<100;i++)
	    {
		     if(str[i]>='0'&&str[i]<='9')
			   j=j+1;
	     }
	cout<<"���ַ������е������ַ���"<<j<<"��"<<endl;
}  
