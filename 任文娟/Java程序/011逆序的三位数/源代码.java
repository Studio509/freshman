import java.util.Scanner;

public class nixudethreefigures {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sanweishu=new Scanner(System.in);
		int n,a,b,c,m;
		n=sanweishu.nextInt();
		a=n%10;
		b=n/10%10;
		c=n/100;
		if(a==0&&b!=0&&c!=0)
			m=c+b*10;
		else if(a==0&&b==0&&c!=0)
		    m=c;
		else
		    m=a*100+b*10+c;
		System.out.println(m);
		sanweishu.close(); 

	}

}
