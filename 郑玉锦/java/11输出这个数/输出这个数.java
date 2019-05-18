import java.util.Scanner;
public class 输出这个数 {
public static void main(String[] args)
{
	Scanner input= new Scanner (System.in);
	int a;//定义一个整数,为了范围大，定义成浮点型
	int i;//循环用
	int x=0;//用来记录这个整数的位数
	int y=0;//用来累加各数字求其和
	int[] q=new int[999];//记录y的各位数
	int w=0;//用来获取y的位数
	int j;//循环用
	String[] p=new String[999];
	a=input.nextInt();
	int b=a;//用一个变量来代替这个整数，获取其长度
	int z;//用来获取y的值
	while(1==1)//获取这个整数的长度
	{
		b=b/10;
		x=x+1;
		if(b==0)
			break;
	}
	for(i=0;i<x;i++)//获取这个整数的各位数之和
	{
		y=y+a%10;
		a=a/10;
	}
	z=y;
	while(1==1)//用来获取y的位数
	{
		z=z/10;
		w=w+1;
		if(z==0)
			break;
	}
	for(i=0;i<w;i++)//获取y的各位数之和
	{
		q[i]=y%10;
		y=y/10;
	}
	for(j=0;j<i;j++)//确定y的各位数所对应的拼音
	{
		switch(q[j])
		{
		case 0:p[j]="ling";break;
		case 1:p[j]="yi";break;
		case 2:p[j]="er";break;
		case 3:p[j]="san";break;
		case 4:p[j]="si";break;
		case 5:p[j]="wu";break;
		case 6:p[j]="liu";break;
		case 7:p[j]="qi";break;
		case 8:p[j]="ba";break;
		case 9:p[j]="jiu";break;
		}
	}
	for(i=j-1;i>=0;i--)//输出这个整数各位数之和的各位数所对应的拼音
	{
			//if(q[i]==0)//如果某一位为0
			//{
			//	for(k=j-1;k>i;k--)//判断这个数的前边是否有不为0的数
			//	if(q[k]!=0)//如果在这个数之前有其他不为0的数，则输出该数
			//	{
			//		System.out.print(p[i]);
			//	    if(i!=0)
			//		   System.out.print(" ");
			//	}
			//}
			//if(q[i]!=0)
			//{
			//	System.out.print(p[i]);
			//	if(i!=0)
			//		System.out.print(" ");
			//}
		System.out.print(p[i]);
			if(i!=0)
				System.out.print(" ");
		}
}
}
