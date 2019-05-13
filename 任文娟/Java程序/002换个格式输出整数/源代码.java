import java.util.Scanner;
import java.util.*;
import java.io.*;

public class integer {

	public static void main(String[] args) {
		 int i,j,k,a,b,c;
		  System.out.println("输出一个不超过3位的正整数:");
		  Scanner zs=new Scanner(System.in);
		  int n=zs.nextInt();
		  a=n/100;
		  b=n/10%10;
		  c=n%10;
		  for(i=1;i<=a;i++)
		     System.out.print("B");
		  for(j=1;j<=b;j++)
		     System.out.print("S");
		  for(k=1;k<=c;k++)
			  System.out.print(k);
		  zs.close();
	}
}
