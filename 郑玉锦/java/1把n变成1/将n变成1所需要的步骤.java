import java.util.Scanner;
public class 把n变成1 {
	public static void main(String[] args) {
		 int n;//输入一个正整数n.
		  int nn;//记录输入的正整数n.
		  int i=0;//记录稍后执行的步数.
		  System.out.println("请输入一个正整数n：");
		  Scanner input=new Scanner(System.in);
		  n=input.nextInt();
		  nn=n;
		  while(1==1)
		  {
		    if(n%2==0)
		      {
		        n=n/2;
		        i=i+1;
		      }
		    else if(n>1&&n%2!=0)
		      {
		        n=((3*n)+1)/2;
		        i=i+1;
		      }
		      else if(n==1)
		      {
		        System.out.println("把"+nn+"变成1所需要的步骤是："+i);
				break;
		      }
		}
	}
}
