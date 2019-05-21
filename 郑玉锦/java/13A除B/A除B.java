import java.util.Scanner;
public class A除B {
public static void main()
{
	Scanner input=new Scanner(System.in);
	int a;//除数
	int b;//被除数
	int c;//商
	int d;//余数
	a=input.nextInt();
	b=input.nextInt();
	c=a/b;
	d=a%b;
	System.out.println(c);
	System.out.println(" ");
	System.out.println(d);
}
}
