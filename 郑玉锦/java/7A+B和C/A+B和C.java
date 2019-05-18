import java.util.Scanner; 
public class A加B和C {
public static void main(String[] args)
{
	Scanner input=new Scanner(System.in);
	int n,i;
	int[] x=new int[100];
	int[] y=new int[100];
	int[] z=new int[100];
	n=input.nextInt();
	for(i=0;i<n;i++)
	{
		x[i]=input.nextInt();
		y[i]=input.nextInt();
		z[i]=input.nextInt();;
	}
	for(i=0;i<n;i++)
		if((x[i]+y[i])>z[i])
			System.out.println("case #"+(i+1)+" true");
		else
			System.out.println("case #"+(i+1)+" false");
}
}
