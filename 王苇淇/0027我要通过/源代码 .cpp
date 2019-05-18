#include<iostream>



#include<string>



using namespace std;



int main()



{



	string  x[10]; 



	int i,n;



	cout<<"请输入字符串的个数:";



	cin>>n;



	cout<<"请输入字符串:";



	for(i=0;i<n;i++)



	cin>>x[i];



	for(i=0;i<n;i++)



		if(x[i]=="PAT"||x[i]=="XPATX"||x[i]=="AAPATAA"||x[i]=="PAAT"||x[i]=="AAPAATAAAA")



           cout<<"yes"<<endl;



		else 



			cout<<"no"<<endl;



	return 0;



}
