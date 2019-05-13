import java.util.*;
public class three {
	public static void main(String[] args) {
		int i=0;
		Scanner th=new Scanner(System.in);
		int n=th.nextInt();
		  while(n!=1)
		  {
		     if(n%2==0)
		        n=n/2;
		     else
			n=(3*n+1)/2;
		     i++;
		  }
		  System.out.print("需要"+i+"步才能得到n=1");
		  th.close();
	}
}
