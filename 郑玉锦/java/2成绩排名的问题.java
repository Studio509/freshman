package 成绩排名的问题;
import java.util.Scanner;
public class 成绩排名的问题 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		  int n,i,j;
		  int[] a=new int[100];
		  int k;
		  //string b[100],z;
		  String[] b=new String[100];
		  String z;
		  n=input.nextInt();
		  for(i=0;i<n;i++)
		    {
		      a[i]=input.nextInt();
		      b[i]=input.next();
		    }
		  for(i=0;i<n-1;i++)
		    {
		      for(j=0;j<n-i;j++)
		        {
		          if(a[j]<a[j+1])
		            {
		              k=a[j];
		              a[j]=a[j+1];
		              a[j+1]=k;
		              z=b[j];
		              b[j]=b[j+1];
		              b[j+1]=z;
		            }
		        }
		  }
		  System.out.println(a[0]+" "+b[0]);
		  System.out.println(a[n-1]+" "+b[n-1]);
	}
}
