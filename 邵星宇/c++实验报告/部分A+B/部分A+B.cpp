#include <iostream>
using namespace std; 
int main(){
    string s1,s2;
    int d1,d2;
    long sum1=0,sum2=0;
    cin>>s1>>d1>>s2>>d2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]-'0'== d1){
            sum1=sum1*10+d1;
        }
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]-'0'==d2){
            sum2=sum2*10+d2;
        }
    }
    cout<<sum1+sum2;
    return 0;
}
