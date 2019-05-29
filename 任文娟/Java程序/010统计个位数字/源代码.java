import java.util.Scanner;

public class tongjidigits {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner zhengshu=new Scanner(System.in);
		Scanner digits=new Scanner(System.in);
		  int n,d,t;
		  n=zhengshu.nextInt();
		  d=digits.nextInt();
		  t=Count_Digit(n,d);
		  System.out.println(t);
		  zhengshu.close();
		  digits.close();
	}
	static int Count_Digit (int N,int D )
		{
		  int n,j=0;
		  if(N<0)
			  n=-N;
		  else
			  n=N;
		  while(n>0)
		  {
			  if(n%10==D)
				 j++;
			  n=n/10;
		  }
		  return j;
		}

}
