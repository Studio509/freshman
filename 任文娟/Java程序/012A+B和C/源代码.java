import java.util.Scanner;
public class ABC {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner geshu=new Scanner(System.in);
		Scanner zhengshu=new Scanner(System.in);
		int T=geshu.nextInt();
		if(T>10)
			return;
		double A,B,C;
		for(int i=1;i<=T;i++)
		{
			A=zhengshu.nextDouble();
			B=zhengshu.nextDouble();
		    C=zhengshu.nextDouble();
		    if(A+B>C)
		    	System.out.println("Case #"+i+": true");
		    else
		         System.out.println("Case #"+i+": false");
		 }
		geshu.close();
		zhengshu.close();
	}

}
