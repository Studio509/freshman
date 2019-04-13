#include<iostream>
#include<string>
using namespace std;
int main()
{  
	string s,k;    
    int n,d = 0;
    cout<<"输入被除数和除数：";
    cin >> s >> n;    
    for(int i = 0; i <= s.size()-1; i++)
{   int current = d * 10 + (s[i]-'0');        
    k+= (current / n+'0');        
    d = current % n;   
}    
for(int i = (k[0] == '0' && k.size()!=1)?1:0; i < k.size(); i++)       
	cout << k[i];   
  cout << " " << d;
return 0;
}
