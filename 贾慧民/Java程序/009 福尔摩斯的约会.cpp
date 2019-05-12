import java.util.Scanner;
public class Nine {
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		String str1 = scan.next();
		String str2 = scan.next();
		String str3 = scan.next();
		String str4 = scan.next();
		int a = str1.length();
		int b = str2.length();
		int c = str3.length();
		int d = str4.length();
		int m = 0;
		int i;
		int x[] = new int [100];
		 for( i=0;i<a;i++)
				for(int j=0;j<b;j++)
					{
					   char s = str1.charAt(i);
					   char z = str1.charAt(j);
					   if(s<90&&s>64)
					    if(s==z)
					    {	m++;
			                for(i=m-1;i<m;i++)
						    x[i]=z;
			            }
					 }
		 switch(x[0]-65)
			{case  0:System.out.print("MON");break;
			 case  1:System.out.print("TUE");break;
		     case  2:System.out.print("WED");break;
			 case  3:System.out.print("THU");break;
		     case  4:System.out.print("FRI");break;
			 case  5:System.out.print("SAT");break; 
			 case  6:System.out.print("SUN");break;
			}
		 int n=x[1]-54;
		 System.out.print(" "+n+":");
		 for( i=0;i<c;i++)
			{for(int j=0;j<d;j++)
			 {  char y  = str3.charAt(i);
			    char p  = str4.charAt(j);
			
			    if(y>=97&&y<=122)
				{ if(i==j&&y==p)
		         {
					m=1;
					int o=i;
					break;
				 }
				if(m==1)break;
				 }
			    }
			}
		if( i<10)
			System.out.print("0"+i);
		else
			System.out.print(i);
		scan.close();
	}
}
