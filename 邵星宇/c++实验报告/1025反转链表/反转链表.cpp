#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
struct Node{
    int address;
    int data;
    int next; 
};
int main(){
    int N,first,K;
    vector<Node> shunxu;
    vector<Node> reverse;
    cin>>first>>N>>K;
    Node n;
    Node addr[100000];     
    for(int i=0;i<N;i++){
        cin>>n.address>>n.data>>n.next;
        addr[n.address]=n;  
    }
    int nextaddress=first;   
    while (nextaddress != -1){  
        shunxu.push_back(addr[nextaddress]); 
        nextaddress = addr[nextaddress].next;
    }
    int size=shunxu.size();  
    int temp=K-1;
    while(temp<size){       
        for(int i=temp;i>temp-K;i--){
            reverse.push_back(shunxu[i]);
        }
        temp+=K;
    }
    for(int i=temp-K+1;i<size;i++)
        reverse.push_back(shunxu[i]);
    for(int i=0;i<size-1;i++){     
        reverse[i].next=reverse[i+1].address;
        printf("%05d %d %05d\n",reverse[i].address,reverse[i].data,reverse[i].next);  
    }
    printf("%05d %d %d\n",reverse[size-1].address,reverse[size-1].data,-1);

    return 0;
}