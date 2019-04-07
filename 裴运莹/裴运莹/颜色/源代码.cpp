#include<iostream>
using namespace std;
int main()
{
	 int number;
    cout<<"=========MENU========="<<endl;
    cout<<"1.******************赤"<<endl;
    cout<<"2.******************橙"<<endl;
    cout<<"3.******************黄"<<endl;
    cout<<"4.******************绿"<<endl;
    cout<<"5.******************青"<<endl;
    cout<<"6.******************蓝"<<endl;
    cout<<"7.******************紫"<<endl;
    cout<<"请输入一个数字:"<<endl;
 cin>>number;
 if(number>0&&number<=7)
    switch(number)
  {
   case 1:cout<<"赤"<<endl;break;
   case 2:cout<<"橙"<<endl;break;
   case 3:cout<<"黄"<<endl;break;
   case 4:cout<<"绿"<<endl;break;
   case 5:cout<<"青"<<endl;break;
   case 6:cout<<"蓝"<<endl;break;
   case 7:cout<<"紫"<<endl;break;
 }
 else 
	 cout<<"您输入的数据有误"<<endl;
 return 0;
}
