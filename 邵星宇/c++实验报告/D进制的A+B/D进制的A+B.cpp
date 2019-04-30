#include <iostream>
using namespace std;
int main(){
    int a,b,d,sum,length;
    cin>>a>>b>>d;
    sum = a+b;
    int result[32] = {0};
    for(int i = 0;i<32;i++){
        result[i] = sum%d;
        sum = (sum - result[i])/d;
        if(sum==0){
            length = i;
            break;
        }           
    }
    for(int i=length;i>=0;i--){
        cout<<result[i];
    }
    return 0;   
}
