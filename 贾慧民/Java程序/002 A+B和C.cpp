import java.util.Scanner;
public class A {
	public static void main(String []args){
		Scanner Scan = new Scanner(System.in);
		int n = Scan.nextInt();
		int x[][] = new int[10][3];
		for(int i=0;i<n;i++)
			for(int j=0;j<3;j++)
				 x[i][j]=Scan.nextInt();
		for(int i=0;i<n;i++)
			if(x[i][0]+x[i][1]>x[i][2])
		      System.out.println("Case #"+(i+1)+":"+" true");
			else 
				System.out.println("Case #"+(i+1)+":"+" false");
		Scan.close();
	} 
}
