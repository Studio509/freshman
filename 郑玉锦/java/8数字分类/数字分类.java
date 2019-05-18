import java.text.DecimalFormat;
import java.util.Scanner;
public class 数字分类 {
		public static void main(String[] args)
	{
		Scanner input=new Scanner (System.in);
		DecimalFormat df=new DecimalFormat("#0.0");
		int n,i,a1=0,a2=0,a3=0,a5=0,j=1,k=0;
		int[] x=new int[100];
		double a4=0;
		n=input.nextInt();
		for(i=0;i<n;i++)
			x[i]=input.nextInt();
		for(i=0;i<n;i++)
		{
			if(x[i]%5==0&&x[i]%2==0)
				a1=a1+x[i];
			else if(x[i]%5==1)
			{
				if(j%2==1)
					a2=a2+x[i];
				else
					a2=a2-x[i];
				j=j+1;
			}
			else if(x[i]%5==2)
				a3=a3+1;
			else if(x[i]%5==3)
				{
					k=k+1;
					a4=a4+x[i];
				}
			else if(x[i]%5==4)
				if(x[i]>a5)
					a5=x[i];
		}
		if(k==0)
			a4=0;
		else
			a4=a4/k;
		if(a1==0)
			System.out.print("N"+" ");
		else
			System.out.print(a1+" ");
		if(a2==0)
			System.out.print("N"+" ");
		else
			System.out.print(a2+" ");
		if(a3==0)
			System.out.print("N"+" ");
		else
			System.out.print(a3+" ");
		if(a4==0)
			System.out.print("N"+" ");
		else
			System.out.print(df.format(a4)+" ");
		if(a5==0)
			System.out.print("N");
		else
			System.out.print(a5);
	}
}
