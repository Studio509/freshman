#include "StdAfx.h"
#include "student.h"
#include<iostream>
#include<string>
using namespace std;
student::student(string n,string m,string s)
{num=n;
name=m;
sex=s;
}
void student::output()
{cout<<num<<"  "<<name<<"  "<<sex<<endl;
}


