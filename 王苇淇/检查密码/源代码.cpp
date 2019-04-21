 #include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
	{
        char s[80];
        bool num = false;
        bool let = false;
        bool ill = false;
        cin>>s;
        if(strlen(s) < 6)
		{
            cout<<"Your password is tai duan le."<<endl;
            continue;
        }
        for(int i=0;i<strlen(s);i++)
		{
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                let = true;
            else if(s[i]>='0' && s[i]<='9')
                num = true;
            else if(s[i]!='.')
                ill = true;
        }
	
        if(ill)
            cout<<"Your password is tai luan le."<<endl;
        else if(let && !num)
            cout<<"Your password needs shu zi."<<endl;
        else if(!let && num)
            cout<<"Your password needs zi mu."<<endl;
        else
            cout<<"Your password is wan mei."<<endl;
}
    return 0;
}
