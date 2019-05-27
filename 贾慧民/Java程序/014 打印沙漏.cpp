import java.util.Scanner;
public class Fourteen {
	public static void main(String []arges ) {
	  Scanner scan = new Scanner(System.in);
	  String str = scan.nextLine();
	  int n = scan.nextInt();
	  int i,k,j,l;
	  for(i=1;i>=0;i++)
			if((n>2*(i-1)*(i-1)-1&&n<2*i*i-1)||n==2*(i-1)*(i-1)-1)break;//判断不重复的行数
	  for(k=i-1;k>0;k--)   //上半部分
		 { for(j=0;j<i-1-k;j++)  //输入空格
			  System.out.print(" ");
		   for(l=(2*(i-1)-1)-2*j;l>0;l--)  //输入符号
			   System.out.print(str);
		   System.out.println();     //换行
		} 
		for(k=1;k<i-1;k++)    //下半部分
		 { for(j=0;j<i-2-k;j++)    //输入空格
			 System.out.print(" ");
		   for(l=(2*(i-1)-1)-2*j;l>0;l--)    //输入符号
			   System.out.print(str);
		   System.out.println();    //换行
		} 
		 System.out.print(n-2*(i-1)*(i-1)+1);  //计算剩余符号个数
		 scan.close();
	}
}
