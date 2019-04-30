#include <iostream>
using namespace std;
int main(){
    int N=0;
    char jiw,yi;
    int result[2][6] ={0};
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>jiw>>yi;
        if(jiw=='B'){
            if(yi=='B'){
                result[0][1]++;
                result[1][1]++;
            }
            else if(yi=='C'){
                result[0][0]++;
                result[1][2]++;
                result[0][3]++;
            }
            else{
                result[0][2]++;
                result[1][0]++;
                result[1][5]++;
            }

        } 
        else if(jiw=='C'){
            if(yi=='C'){
                result[0][1]++;
                result[1][1]++;
            }
            else if(yi=='J'){
                result[0][0]++;
                result[0][4]++;
                result[1][2]++;
            }
            else{
                result[0][2]++;
                result[1][0]++;
                result[1][3]++;
            }
        }
        else{
            if(yi=='J'){
                result[0][1]++;
                result[1][1]++;
            }
            else if(yi=='B'){
                result[0][0]++;
                result[1][2]++;
                result[0][5]++;
            }
            else{
                result[0][2]++;
                result[1][0]++;
                result[1][4]++;
            }
        }
    } 
    cout<<result[0][0]<<" "<<result[0][1]<<" "<<result[0][2]<<"\n";
    cout<<result[1][0]<<" "<<result[1][1]<<" "<<result[1][2]<<"\n";

    int index1=0,index2=0,num1=-1,num2=-1;
    for(int i=3;i<6;i++){
        if(result[0][i]>num1){
            index1=i;
            num1 = result[0][i];
        }   
        if(result[1][i]>num2){
            index2=i;
            num2 = result[1][i];
        }
    }

    if(index1 == 3)
        cout<<'B'<<' ';
    else if(index1==4)
        cout<<'C'<<' ';
    else
        cout<<'J'<<' ';


    if(index2 == 3)
        cout<<'B';
    else if(index1==4)
        cout<<'C';
    else
        cout<<'J';  
    return 0;
}
