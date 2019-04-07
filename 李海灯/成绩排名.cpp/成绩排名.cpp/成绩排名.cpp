
#include <iostream>

#include <string>

using namespace std; 

int main() {

	int n(0); 
    
	cout<<"输入学生的个数"<<endl;

	cin >> n;

	string max_name(""), max_id(""),min_name(""), min_id("");

	int max(0), min(0); 

	for(int i=0;i<n;i++) {

	 string temp1, temp2;

	 int temp3;

	 //cout<<"输入学生的姓名，学号，分数"<<endl;

	 cin >> temp1 >> temp2>>temp3;

	 if(temp3>max){

	 	max =temp3;

	 	max_name=temp1;

	 	max_id = temp2;

		}

		

		if(temp3<min){

			min = temp3;

			min_name=temp1;

			min_id=temp2;

		}

	}

	

	cout <<max_name << " " << max_id<<endl;

	cout << min_name << " "<< min_id; 

	return 0;

}



