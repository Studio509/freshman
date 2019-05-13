import java.util.Scanner;
public class Eleven {
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		long num = scan.nextInt();            //输入被除数
		int a = scan.nextInt();              //输入除数
		long Q = num/a;                       //计算商
		long R = num%a;                       //计算余数
		System.out.println(Q+" "+R);         //输出商与余数
		scan.close();
	}
}
