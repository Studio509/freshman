#include<iostream>
using namespace std;
int main()
{
  int n,num,score;
  cout<<"请输入参赛人数";
  cin>>n;
  int a[1000]={0};
  int max,num_max;
    max=0;
  cout<<"请输入参赛者信息"<<endl;
  for(int i=0;i<n;i++){
    cin>>num>>score;
    a[num] +=score;
  }
  
  for(int i=0;i<n+10;i++){
    if(a[i]>max){
      max=a[i];
      num_max=i;
    }
  }
  cout<<"总得分最高的学校的编号、及其总分"<<num_max<<" "<<max;
  return 0;
}
