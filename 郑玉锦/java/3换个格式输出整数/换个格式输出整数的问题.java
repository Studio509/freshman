import java.util.Scanner;
public class a {
public static void main(String[] args)
{
		int a,b,c,d,i;
		Scanner input=new Scanner(System.in);
		a=input.nextInt();
		b=a/100;
		c=a%100/10;
		d=a%100%10;
		for(i=0;i<b;i++)
			System.out.print("B");
		for(i=0;i<c;i++)
			System.out.print("S");
		for(i=1;i<=d;i++)
		    {
			System.out.print(i);
		    }
}
}
