#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
 
struct Student{
 	
	   int xue;
	   int de;
	   int cai;
	   int zong;
	
};
bool compare(Student o1,Student o2){
	if(o1.zong != o2.zong){
					return o1.zong > o2.zong;
				}else if(o1.de != o2.de ){
					return o1.de > o2.de;
				}else{
					return o2.xue > o1.xue;
				} 
				
}
int main(){
	int N,L,H;
	scanf("%d%d%d",&N,&L,&H);
	vector<Student> a1;
	vector<Student> a2;
	vector<Student> a3;
	vector<Student> a4;
	for(int i=0;i<N;i++){
		int xue,de,cai;
		cin>>xue>>de>>cai;
		if(de>=L && cai>=L){
			Student stu;
				stu.xue=xue;
				stu.de = de;
				stu.cai = cai;
				stu.zong = cai+de;
			
				if(de >= H && cai>= H){
					a1.push_back(stu);
				}else if(cai <H && de>=H){
					a2.push_back(stu);
				}else if(cai <H && de <H && de>=cai ){
					a3.push_back(stu);
				}else {
					a4.push_back(stu);
				}
			
			}
		
	}
	sort(a1.begin(),a1.end(),compare);
	sort(a2.begin(),a2.end(),compare);
	sort(a3.begin(),a3.end(),compare);
	sort(a4.begin(),a4.end(),compare);
		cout<<a1.size()+a2.size()+a3.size()+a4.size()<<endl;
		for(int i=0;i<a1.size();i++){
			printf("%d %d %d\n",a1[i].xue,a1[i].de,a1[i].cai);
	
		}for(int i=0;i<a2.size();i++){
		printf("%d %d %d\n",a2[i].xue,a2[i].de,a2[i].cai);
		}
		for(int i=0;i<a3.size();i++){
		printf("%d %d %d\n",a3[i].xue,a3[i].de,a3[i].cai);
		}
		for(int i=0;i<a4.size();i++){
		printf("%d %d %d\n",a4[i].xue,a4[i].de,a4[i].cai);
		}
	return 0;
}
