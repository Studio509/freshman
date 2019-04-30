#include <stdio.h>
#include <algorithm> 
using namespace std;

int cmp(int a,int b){
    return a>b;
}
int main(){
    int d1[4],num;
    int maxsum, minsum;
    scanf("%d",&num);

    while(num!=0){
        int temp =num;
        d1[0] = temp%10;
        temp = (temp - temp%10)/10; 
        d1[1] = temp%10;
        temp = (temp - temp%10)/10; 
        d1[2] = temp%10;
        temp = (temp - temp%10)/10; 
        d1[3] = temp%10;    

        sort(d1,d1+4,cmp);
        maxsum = d1[0]*1000+d1[1]*100+d1[2]*10+d1[3];
        minsum = d1[0]+d1[1]*10+d1[2]*100+d1[3]*1000;
        num = maxsum-minsum;
        printf("%04d - %04d = %04d\n",maxsum,minsum,num);
        if(num==0 || num==6174)
            break;      
    }   
    return 0;
}
