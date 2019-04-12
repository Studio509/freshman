package ht;
import java.io.*;
public class student{//student类
	  int studentAge;
     public student(String name)//构造方法/构造函数
     {
    	 System.out.println("这个狗的名字是: "+name);
     }
     public void setage(int age) {//函数
    	 studentAge=age;
     }
     public int getAge() {//函数
    	 System.out.println("小狗的年龄为："+studentAge);
    	 return studentAge;
     }
     public static void main(String[] args) {//主函数
   
    	 student mystudent=new student("刘shiyu");//new一个对象
    	 mystudent.setage(2);//调用对象的setage函数
    	 mystudent.getAge();//调用getage函数
    	 System.out.println("变量值："+mystudent.studentAge);
     }
}

