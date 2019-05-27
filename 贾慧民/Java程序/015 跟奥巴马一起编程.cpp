import java.util.Scanner;
public class Fifteen {
	public static void main (String[] arges) {
		Scanner scan = new Scanner(System.in);
		String str = scan.nextLine();
		int n = scan.nextInt();
		int i,j;
		for(i=1;i<n/2+1;i++)
		if(i==1||i==n/2) //确定第一行和最后一行输出符号个数个符号
			{for(j=0;j<n;j++)
				System.out.print(str);
			    System.out.println();}
		else     //除了第一行和最后一行其他都是第一列和最后一列输出符号
			{System.out.print(str);
			for(j=0;j<n-2;j++)
				System.out.print(" ");
			    System.out.println(str);}
		scan.close();
	}
}
