#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Student{
    private:
        string name;
        string number;
        int score;
    public:
        Student(){
        };
        void display();
        void setStudent();
        
    bool operator <(Student &s) const {
        return score<s.score;
        }
    };
    
    void Student::setStudent(){
        cin>>name;
        cin>>number;
        cin>>score;
    }
    void Student::display(){
    cout<<name<<" "<<number<<endl;
        }
main(){
    Student stu;
    vector<Student> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        stu.setStudent();
        v.push_back(stu);
        
    }
    sort(v.begin(),v.end());
    v[n-1].display();
    v[0].display();   
}
