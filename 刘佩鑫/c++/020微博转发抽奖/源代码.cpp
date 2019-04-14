#include <iostream>
using namespace std;
int main()
{
    int m,n,s;
    int a=0,i=0;
    string b;
    string c[10000]={"0"};
    int flag=1;
    cin>>m>>n>>s;
    if(m<s){
        cout<<"Keep going...";
        return 0;
    }
    while(m--){
        cin>>b;
        flag=1;
        a++;
        for(int j=0;j<10000;j++){
            if(c[j]==b){
                flag=0;
                a--;
            }
        }
        if(a>s&&(a-s)%n==0&&flag==1){
            cout<<b<<"\n";
            c[i++]=b;
        }
        if(a==s){
            cout<<b<<"\n";
            c[i++]=b;
        }
    }
    return 0;
}
