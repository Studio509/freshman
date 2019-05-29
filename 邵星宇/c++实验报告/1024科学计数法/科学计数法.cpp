#include <iostream>    
#include <string>
#include <iomanip>
using namespace std;
int main(void){   
	string s; cin>>s;
	if(s[0]=='-'){
		cout<<s[0];
	}
	s.erase(s.begin()); 
	for(int i=0;i<s.length();++i){
		if(s[i]=='E'){    
			string x = s.substr(0,i);   
			x.erase(x.begin()+1); 
			int gete= stoi(s.substr(i+1,s.size()-i-1));
			int ex = i-2;         
			if(gete<0){
				cout<<"0.";
				for(int j=0;j<(0-gete-1);++j){
					cout<<"0";
				} 
				cout<<x<<endl;
			}else{ 
				if(gete>=ex){
					cout<<x;
					for(int j=0;j<(gete-ex);++j){
						cout<<"0";
					} 
				}else{
					x.insert(x.begin()+(gete+1),'.');
					cout<<x<<endl;
				} 
			} 
			break;
		}
	} 
	return 0;
}
