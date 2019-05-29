#include<iostream>
#include<string>
using namespace std;
int main(){
    struct People{
        string name;
        string date;
    };
    int N;
    int i;
    int counts=0;
    string max="1814/09/06";
    string min="2014/09/06";
    int max1=0;
    int min1=0;
    cin>>N;
    struct People P[N];
    for(i=0;i<N;i++){
        cin>>P[i].name>>P[i].date;
        if(P[i].date>="1814/09/06"&&P[i].date<="2014/09/06")
        {
          counts++;
          if(P[i].date<min)
          {
            min=P[i].date;min1=i;
          }
          if(P[i].date>max)
          {
            max=P[i].date;max1=i;
          }
        }
    }
    cout<<counts;
    if(counts)
    {cout<<" "<<P[min1].name;
    cout<<" "<<P[max1].name;}
    else{
      cout<<endl;
    }
    return 0;
} 
