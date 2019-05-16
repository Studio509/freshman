import java.awt.Frame;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		Student [] st = new Student[100];
		int n, i, max, min;
		Scanner scan = new Scanner(System.in);
		n = scan.nextInt();
		for (i = 0; i < n; i++) {
			st[i] = new Student();
			st[i].name = scan.next();
			st[i].num = scan.next();
			st[i].grade = scan.nextInt();
		}
		max = st[0].grade;
		min = st[0].grade;
		int t1 = 0, t2 = 0;
		for (i = 1; i < n; i++) {
			if (st[i].grade > max) {
				max = st[i].grade;
				t1 = i;
			}
			if (st[i].grade < min) {
				min = st[i].grade;
				t2 = i;
			}
		}
		System.out.println(st[t1]);
		System.out.println(st[t2]);
		scan.close();
	}
}
class Student {
	
	Student(){
		super();
	}
	String name;
	String num;
	int grade;

	@Override
	public String toString() {
		String s = "姓名："+this.name +"\n"
				+"学号："+this.num +"\n"
				+"成绩："+this.grade +"\n";
		return s;
	}
}
