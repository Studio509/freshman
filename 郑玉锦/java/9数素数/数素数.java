import java.util.Scanner;
public class 数素数 {
public static void main(String[] args)
{
	Scanner input=new Scanner (System.in);
	int m,n,i=2,j,k=0;
	int[] a=new int[10000];
	m=input.nextInt();
	n=input.nextInt();
	while(1==1)
	   {
		for(j=2;j<i;j++)
		if(i%j==0)
			break;
		if(j==i)
		{
			a[k]=i;
			k=k+1;
		}
		i=i+1;
		if(k==n)
			break;
	}
	for(i=m-1;i<n;i++)
	{
		System.out.print(a[i]);
		if((i+1)!=k)
			System.out.print(" ");
		if((i-m+2)%10==0)
			System.out.print('\n');
	}
}
}
