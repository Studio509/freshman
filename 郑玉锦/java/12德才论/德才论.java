import java.util.Scanner;
public class decailun {
	
	public static class student//定义一个学生类
	{
		String a;//学生的准考证号
		int d_score;//学生的德分
		int c_score;//学生的才分
	}

public static void main(String[] args)
{
	
	Scanner input=new Scanner (System.in);
		int n;//记录学生的总数
		int m;//所有达线的人数
		int l;//最低录取分
		int h;//优先录取分
		int i;//循环用
		int k;//循环用
		int b=0;//确定每一类学生输几次
		student[] s=new student[100];//定义一个学生类数组
		int x1=0;
		student [][] y=new student[4][100];//记录满足各条件的学生
		int x2=0;
		int x3=0;
		int x4=0;
		student st;//之后按分数排序时用
		n=input.nextInt();
		l=input.nextInt();
		h=input.nextInt();
		for(i=0;i<n;i++)
		{
			s[i]=new student();
			s[i].a=input.next();
			s[i].d_score=input.nextInt();
			s[i].c_score=input.nextInt();
		}
		for(i=0;i<n;i++)//开始记录各类学生
		{
			if(s[i].c_score>=h&&s[i].d_score>=h)
			{
				y[0][x1]=s[i];
				x1=x1+1;
			}
			else if(s[i].d_score>=h&&s[i].c_score>=l&&s[i].c_score<h)
			{
				y[1][x2]=s[i];
				x2=x2+1;
			}
			else if(s[i].d_score<h&&s[i].d_score>=l&&s[i].c_score>=l&&s[i].c_score<h&&s[i].d_score>s[i].c_score)
			{
				y[2][x3]=s[i];
				x3=x3+1;
			}
			else if(s[i].c_score>=l&&s[i].d_score>=l)
			{
				y[3][x4]=s[i];
				x4=x4+1;
			}
		}
		m=x1+x2+x3+x4;//计算总达线人数
		int j;
		for(j=0;j<4;j++)
		{
			if(j==0)
				b=x1;
			if(j==1)
				b=x2;
			if(j==2)
				b=x3;
			if(j==3)
				b=x4;
		for(k=1;k<n;k++)
		{
		for(i=0;i<b-1;i++)//给各类学生排序
		{
			if((y[j][i].c_score+y[j][i].d_score)<(y[j][i+1].c_score+y[j][i+1].d_score))//根据德分和才分之和排序
			{
				st=y[j][i];
				y[j][i]=y[j][i+1];
				y[j][i+1]=st;
			}
			else if(y[j][i].c_score+y[j][i].d_score==y[j][i+1].c_score+y[j][i+1].d_score)//若德分和才分之和相同
			{
				if(y[j][i].d_score<y[j][i+1].d_score)//则根据德分排序
				{
					st=y[j][i];
					   y[j][i]=y[j][i+1];
					   y[j][i+1]=st;
				}
				else if(y[j][i].d_score==y[j][i+1].d_score)//若德分也相同
				{
					if(s[i].a.compareTo(s[i+1].a)>0)//则根据学号排序,s[i].a若大于s[i+1].a则返回值大于0，s[i].a若等于s[i+1].a则返回值等于0，s[i].a若小于s[i+1].a则返回值小于0
					{
						   st=y[j][i];
					       y[j][i]=y[j][i+1];
					       y[j][i+1]=st;
					}
				}
			}
		}
		}
		}
		System.out.println(m);//输出总达线人数
		for(j=0;j<4;j++)//输出各类学生
		{
			if(j==0)
				b=x1;
			if(j==1)
				b=x2;
			if(j==2)
				b=x3;
			if(j==3)
				b=x4;
			for(i=0;i<b;i++)//输出每一类学生
				System.out.println(y[j][i].a+" "+y[j][i].d_score+" "+y[j][i].c_score);
		}
}
}
