package 一元多项式求导;
import java.util.Scanner;
public class 一元多项式及求导 {
public static void main(String[] args)
{
	Scanner input=new Scanner(System.in);
	int[] c=new int[100];//记录系数用
	int[] x=new int[100];//记录指数用
	int i=0,j=0;
	String s=input.nextLine();
	String[] y=s.split(" ");//把s按" "来分成不同的部分
	int[] b=new int[y.length];
	for(i=0;i<b.length;i++)
		{
			b[i]=Integer.parseInt(y[i]);//把s的不同的部分y转换成int型存放到b[]中
			System.out.println(b[i]);
		}
	for(i=0,j=0;i<b.length-1;i=i+2)//将b[]中的值赋给c和x
	{
		c[j]=b[i];
		x[j]=b[i+1];
		j=j+1;
	}
		for(i=0;i<j;i++)
		{
			if(c[i]==0)
				System.out.print(c[i]+" ");
			else if(x[i]==0)
				System.out.print(x[i]+" ");
			else if(x[i]==1)
				System.out.print(c[i]*x[i]+" ");
			else
			{
				System.out.print(c[i]*x[i]+" ");
				System.out.print((x[i]-1)+" ");
			}
		}
}
}
