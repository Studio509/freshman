#include <iostream>
using namespace std;
struct student
{
  char name[10];
  char num[10];
  int grade;
};
int main()
{
  struct student st[100];
  int n,i,max,min;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>st[i].name>>st[i].num>>st[i].grade;
  }
  max=st[0].grade;
  min=st[0].grade;
  int t1=0,t2=0;
  for(i=1;i<n;i++)
  {
    if(st[i].grade>max)
    {
      max=st[i].grade;
      t1=i;
    }
    if(st[i].grade<min)
    {
      min=st[i].grade;
      t2=i;
    }
  }
  cout<<st[t1].name<<" "<<st[t1].num<<" "<<st[t1].grade<<endl;
  cout<<st[t2].name<<" "<<st[t2].num<<" "<<st[t2].grade<<endl;
  return 0;
}
