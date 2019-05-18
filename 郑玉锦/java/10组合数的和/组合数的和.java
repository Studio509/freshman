package 组合数的和;
import java.util.Scanner;
public class 组合数的和 {
public static void main(String[] args)
{
	Scanner input=new Scanner (System.in);
	int n,i,j,k=0,max=0,min=9;
	int[] x=new int[100];
	n=input.nextInt();
	for(i=0;i<n;i++)
	{
		x[i]=input.nextInt();
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i!=j)
				k=k+x[i]*10+x[j];
	System.out.print(k);
}
}
