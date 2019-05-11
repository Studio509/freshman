import  java.util.Scanner;
public class Ten {
		public static void main(String []arges) {
			Scanner scan = new Scanner(System.in);
			String str1 = scan.nextLine();
			String str2 = scan.nextLine();
			int n1 = scan.nextInt();
			int n2 = scan.nextInt();
			int a = str1.length();
			int b = str2.length();
			int j = 0;  int k = 0;
			int l = 0;  int m = 0;
			for(int i=0;i<a;i++)
				{char s = str1.charAt(i);
				 if(s-48 == n1)
					j++;}
			for(int i=0;i<b;i++)
				{char v = str2.charAt(i);
				 if(v-48 == n2)
					k++;}
			for(int i=0;i<j;i++)
				  l = 10*l+1;
			l = n1*l;
			for(int i=0;i<k;i++)
				  m = 10*m+1;
			m = n2*m;
			int n = m+l;
			System.out.println(n);
			scan.close();
		}
	}
