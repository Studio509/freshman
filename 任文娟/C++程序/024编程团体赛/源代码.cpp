#include<iostream>
using namespace std;
int main()
{
    int N,n,m,score[1000]={0},i,_score;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>n>>m>>_score;
        score[n]+=_score;
    }
    int max=0,t;
    for(i=0;i<1000;i++)
    {
        if(max<score[i])
        { 
            max=score[i];
            t=i;
        }
    }
    cout<<t<<" "<<max<<endl;
    return 0;
}
