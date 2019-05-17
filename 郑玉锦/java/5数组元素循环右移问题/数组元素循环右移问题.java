import java.util.Scanner;
public class 数组循环右移问题 {
public static void main(String[] args)
{
		int n,m,u,i,j;
		int[] a=new int[100];
		Scanner input=new Scanner (System.in);
		n=input.nextInt();
		m=input.nextInt();
		for(i=0;i<n;i++)
			a[i]=input.nextInt();
		for(i=1;i<=m;i++)
		{
			u=a[n-1];
			for(j=1;j<n;j++)
				a[n-j]=a[n-j-1];
			a[0]=u;
		}
		for(i=0;i<n;i++)
		{
			System.out.print(a[i]);
			if(i!=n-1)
				System.out.print(" ");
		}
}
}
