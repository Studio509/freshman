import java.util.Scanner;
public class Six {
	public static void B(int x) {
		int i=x/100;
		int j=x%100/10;
		int m=x%100%10;
		for(int k=0;k<i;k++)
			System.out.print("B");
		for(int k=0;k<j;k++)
			System.out.print("S");
		for(int k=0;k<m;k++)
			System.out.print(k+1);
	}
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		B(n);
		scan.close();
	}
}
