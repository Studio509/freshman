import java.util.Scanner;
public class Twelve {
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		int n1 = scan.nextInt();
		int n2 = scan.nextInt();
		int D = scan.nextInt();
		int sum = n1 + n2;
		int j = 0,i,l,k;
		int m = 0;
		int x[] = new int [100];
		sum=n1+n2;//计算A+B
		for(i=1;i>0;i++)
		{	
			l=sum%D;//计算A+B的和对D取余
		    sum=sum/D;//计算A+B的和除以D的商
			  j++;//统计执行了几次
			  for(k=j-1;k<j;k++)
				  x[k]=l;//将得到的余数存放到数组中
	            if(sum==0)break;//跳出循环的条件
		}
		for(i=j-1;i>=0;i--)
			m=(int) (x[i]*java.lang.Math.pow( 10, i)+m);//计算转换进制后的数
		System.out.println(m);//输出转换进制后的数
		scan.close();
	}
}
