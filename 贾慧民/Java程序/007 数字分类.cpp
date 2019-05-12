import java.util.Scanner;
import java.text.DecimalFormat;
public class Seven {
	
	static int k;
	static int i;
	static int y[] = new int [100];
	public static void A1(int n,int []x) {
		int y[] = new int [100];
		int m = 0;
	    int j = 0;
		for(int i=0;i<n;i++)
		  {  
			  if(x[i]%5==0&&x[i]%2==0)
			{	 j++;
		       for(int k=j-1;k<j;k++)
				y[k]=x[i];
			  }}
		for(int i=0;i<j;i++)
			m=m+y[i];
		if(m==0)
			System.out.print("N");
		else
			System.out.print(m);
	}
	public static void A2(int n,int []x) {
		int m = 0;
	    int j = 0;
		for(int i=0;i<n;i++)
		  {  
			  if(x[i]%5==1)
			 {	j++;
		        for(k=j-1;k<j;k++)
				  y[k]=x[i];
			  }
		  }
		for(i=0;i<j;i++)
			if(i%2!=0)
				y[i]=y[i]*(-1);
		for(i=0;i<j;i++)
			m=m+y[i];
		if(m==0)
			System.out.print("N");
		else
			System.out.print(m);
	}
	public static void A3(int n,int []x) {
	    int j = 0;
	    for(i=0;i<n;i++)  
			  if(x[i]%5==2)
		      	j++;
	    if(j==0)
	    	System.out.print("N");
		else
			System.out.print(j);
	}
	public static void A4(int n,int []x) {
		DecimalFormat de = new DecimalFormat("#0.0");
		int m = 0;
	    int j = 0;
		for(i=0;i<n;i++)
		  {  
			  if(x[i]%5==3)
			{	j++;
		      for(k=j-1;k<j;k++)
				y[k]=x[i];
			  }}
		for(i=0;i<j;i++)
			m=m+y[i];
		if(m==0)
			System.out.print("N");
		else
			System.out.print(de.format(m/j));
	}
	public static void A5(int n,int []x) {
	    int j = 0;
		for(i=0;i<n;i++)
		  {  
			  if(x[i]%5==4)
			{	j++;
		      for(k=j-1;k<j;k++)
				y[k]=x[i];
			  }
		 }
		int max=y[0];
		for(i=1;i<j;i++)
			if(max<y[i])
				max=y[i];
		if(max==0)
			System.out.print("N");
		else
			System.out.print(max);
	}
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int x[] = new int [100];
		for(i=0;i<n;i++)
			x[i]=scan.nextInt();
		A1(n,x);System.out.print(" ");
	    A2(n,x);System.out.print(" ");
		A3(n,x);System.out.print(" ");
		A4(n,x);System.out.print(" ");
		A5(n,x);
		scan.close();
	}
}
