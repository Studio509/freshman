import java.util.*;
public class polynomial {
	public static void main(String[] args) {
		  Scanner jshu=new Scanner(System.in);
		  Scanner dingdian=new Scanner(System.in);
		  Scanner sz=new Scanner(System.in);
		  int i;
		  double t;
		  double[] a=new double[100];
		  int n=jshu.nextInt();
		  double x=dingdian.nextDouble();
		  for(i=0;i<=n;i++)
		     {
			  a[i]=sz.nextDouble();
		     }
		  t=f(n,a,x);
		 System.out.println(t);
		 jshu.close();
		 dingdian.close();
		 sz.close();
	}
	public static double f(int n,double a[],double x)
	{
	  int i;
	  double m=1.0;
	 double sum=a[0];
	  for(i=1;i<=n;i++)
	  {
	    m=m*x;
	    sum=sum+a[i]*m;
	  }
	  return sum;
	}
}
