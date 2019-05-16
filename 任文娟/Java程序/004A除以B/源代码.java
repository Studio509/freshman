import java.util.*;
public class AB {
	public static void main(String[] args) {
		Scanner st=new Scanner(System.in);
		Scanner zs=new Scanner(System.in);
		int R,Q,i;
		String A=new String();
		A=st.nextLine();
		int B=zs.nextInt();
		char ch=A.charAt(0);
		Q=(ch-'0')/B;
		if(Q!=0&&A.length()>1||A.length()==1)
			System.out.print(Q);
		R=(ch-'0')%B;
		for(i=1;i<A.length();i++)
		{
			Q=(R*10+A.charAt(i)-'0')/B;
			System.out.print(Q);
			R=(R*10+A.charAt(i)-'0')%B;
		}
		st.close();
		zs.close();
		System.out.println(" "+R);
	}
}
