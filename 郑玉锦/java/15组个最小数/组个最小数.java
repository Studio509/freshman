import java.util.Scanner;
public class 组个最小数 {
public static void main(String[] args)
{
	Scanner input=new Scanner (System.in);
	int[] a=new int[10];//用来记录0-9的个数
	int j;//循环用
	int i;//循环用
	int b=0;//记录最后得到的整数
	for(i=0;i<10;i++)//输入0-9的个数
		a[i]=input.nextInt();
	for(i=0;i<10;i++)
		if(i!=0&&a[i]!=0)//先将不为零的最小数作为这个数的首位
			{
				b=b*10+i;
				a[i]=a[i]-1;//用了一个数后，须将这个数的个数减一，保证数字个数的准确
				break;
			}
	for(i=0;i<10;i++)
		if(a[i]!=0)
			for(j=0;j<a[i];j++)
			{
				b=b*10+i;
			}
	System.out.println(b);
}
}
