import java.util.Scanner;
public class Average {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		  int i,n;
		  float a;
		  float[] s=new float[100];
		  Scanner geshu=new Scanner(System.in);
		  Scanner shuzu=new Scanner(System.in);
		  System.out.print("请输入数组元素个数:");
		  n=geshu.nextInt();
		  System.out.println("请输入数组元素:");
		  for(i=0;i<n;i++)
		     s[i]=shuzu.nextFloat();
		  a=Average1(s,n);
		  System.out.println("平均值为:"+a);
		  geshu.close();
		  shuzu.close();
		}
		static float Average1(float s[],int n)
		{
		  int i;
		  float ave,sum=0;
		  for(i=0;i<n;i++)
		     sum=sum+s[i];
		  ave=sum/n;
		  return ave;
		}
}
