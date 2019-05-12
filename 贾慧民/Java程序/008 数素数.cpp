import java.util.Scanner;
public class Eight {
	public static void S(int a,int b) {
		int k = 0;
		int x;
		int z[] = new int [1000];
		for(int i=3;i<1000;i++)
			for(int j=2;j<i;j++)
				{if(i%j==0)break;
					if(j==i-1)
					{	k++;
		              for(x=k;x<k+1;x++)
	                   z[x]=i;
					}}
		z[0]=2;
		for(int i=a-1;i<b;i++)
		{	System.out.print(z[i]+" ");;
	       if((i-(a+8))%10==0)
	    	   System.out.println();
		}
	}
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		int m = scan.nextInt();
		int n = scan.nextInt();
		S(m,n);
		scan.close();
	}
}
