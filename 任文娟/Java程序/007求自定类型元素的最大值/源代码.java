import java.util.Scanner;

public class Max {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		   int i,n;
		   Scanner geshu=new Scanner(System.in);
		   float[] s=new float[100];
		   Scanner shuzu=new Scanner(System.in);
		  System.out.print("请输入数组元素个数:");
		   n=geshu.nextInt();
		  System.out.print("请输入数组元素:");
		   for(i=0;i<n;i++)
		 	  s[i]=shuzu.nextFloat();
		   System.out.println("最大值为:"+max(s,n));
		   geshu.close();
		   shuzu.close();
		 }
		 static float max(float s[],int n)
		 {
		 	int i,t = 0;
		    float max;
		 	max=s[0];
		 	for(i=1;i<n;i++)
		 		if(s[i]>max)
		 		{
		 			max=s[i];
		 			t=i;
		 		}
		 	return s[t];
		 }
}
