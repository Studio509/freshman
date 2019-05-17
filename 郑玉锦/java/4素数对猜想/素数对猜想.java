import java.util.Scanner;
public class a {
public static void main(String[] args)
{
	Scanner input=new Scanner(System.in);
		int n,i,j,k=0;
		int[] a=new int[100];
		a[0]=2;
		n=input.nextInt();
		for(i=2;i<=n;i++)
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					break;
				if(j+1==i)
					{
						a[k]=i;
						k=k+1;
				    }
			}
		j=0;
		for(i=1;i<k;i++)
			if(a[i]-a[i-1]==2)
				j=j+1;
		System.out.println(j);
}
}
