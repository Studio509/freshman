#include <iostream>
using namespace std;
int main(){
    string s1,result1="";//result1Ϊ��
    long d,temp=0;//tempΪ����
    cin>>s1>>d;
    for(int i=0;i<s1.length();i++){
        temp = temp*10+s1[i]-'0';
        if(temp>=d){
            char c = temp/d+'0';
            result1 = result1+ c;
            temp = temp%d;
        }
        else if(result1.length()!=0){
            result1 = result1+'0';
        }
    }
    if(result1.length()==0)
        result1 = "0";
    cout<<result1<<" "<<temp;   
    return 0;
}