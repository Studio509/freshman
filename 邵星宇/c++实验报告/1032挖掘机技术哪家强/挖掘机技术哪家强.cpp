#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int> node;
    int N,num,score,maxn=0,maxs=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num>>score;
        if(node.count(num)==0){
            node[num]=score;
        }else{
            node[num]+=score;
        }
    }
    map<int,int>::iterator it;
    for(it=node.begin();it!=node.end();it++){
        if(it->second>maxs){
            maxs=it->second;
            maxn=it->first;
        }
    }
    cout<<maxn<<" "<<maxs; 
    return 0;
}