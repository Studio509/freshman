#include <iostream>
#include <string>
using namespace std; 
void isPAT(string str);
int main() 
{
	int n(0); 
	cin >>n;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin >> temp;
		isPAT(temp); 
	} 
	return 0;
}
void isPAT(string str)
{	 
	int P_j(0),T_j(0);   
	int countP(0), countT(0);  
	bool status= true;   
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!='P' && str[i]!='A'&& str[i]!='T')
		{ 
			status = false;
		} 
		if(str[i]=='P')
		{
			P_j=i;
			countP++;
		} 
		if(str[i]=='T')
		{
			T_j=i;
			countT++;
			break;
		}
	}
	if((T_j-1-P_j)>=1 && P_j*(T_j-1-P_j)==(str.length()-1-T_j) && countP==1 && countT==1 && status){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}