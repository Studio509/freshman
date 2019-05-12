import java.util.Scanner;
public  class Four {
	public static class student{
		String  num;
		int     d;
		int     c;
		int     z;
	};
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		student stu1[] = new student[100];
		student stu2[] = new student[100];
		int l = 0;  int a = 0;
		int n = scan.nextInt();
		int L = scan.nextInt();
		int H = scan.nextInt();
		for(int i=0;i<n;i++)
		{   stu1[i] = new student();
		    stu2[i] = new student();
			stu1[i].num = scan.next();
		    stu1[i].d = scan.nextInt();
		    stu1[i].c = scan.nextInt();}
		for(int i=0;i<n;i++)
			if(stu1[i].d>=L&&stu1[i].c>=L)
	           a++;
		System.out.println(a);
		for(int i=0;i<n;i++)
			if(stu1[i].d>=H&&stu1[i].c>=H)
				{
				   l++;
		           for(int j=l-1;j<l;j++)
					{  stu2[j].z=stu1[i].c+stu1[i].d;
					   stu2[j].num=stu1[i].num;
					   stu2[j].d=stu1[i].d;
					   stu2[j].c=stu1[i].c;
				   }
		         }
		for(int i=1;i<l;i++)
			for(int j=l-1;j>i-1;j--)
				if(stu2[j].z>stu2[j-1].z)
				{ 
				  String e=stu2[j-1].num;stu2[j-1].num=stu2[j].num;stu2[j].num=e;
		          a=stu2[j-1].d;stu2[j-1].d=stu2[j].d;stu2[j].d=a;
				 int b=stu2[j-1].c;stu2[j-1].c=stu2[j].c;stu2[j].c=b;
		         }
		for(int i=0;i<l;i++)
			System.out.println(stu2[i].num+" "+stu2[i].d+" "+stu2[i].c);
		int l1 = 0;
		for(int i=0;i<n;i++)
			if(stu1[i].d>=H&&stu1[i].c<H&&stu1[i].c>=L)
				{
				   l1++;
		           for(int j=l1-1;j<l1;j++)
					{  stu2[j].z=stu1[i].c+stu1[i].d;
					   stu2[j].num=stu1[i].num;
					   stu2[j].d=stu1[i].d;
					   stu2[j].c=stu1[i].c;
				   }
		         }
		for(int i=1;i<l1;i++)
			for(int j=l1-1;j>i-1;j--)
				if(stu2[j].z>stu2[j-1].z)
				{ 
				  String e=stu2[j-1].num;stu2[j-1].num=stu2[j].num;stu2[j].num=e;
		          a=stu2[j-1].d;stu2[j-1].d=stu2[j].d;stu2[j].d=a;
				  int b=stu2[j-1].c;stu2[j-1].c=stu2[j].c;stu2[j].c=b;
		         }
		for(int i=0;i<l1;i++)
			System.out.println(stu2[i].num+" "+stu2[i].d+" "+stu2[i].c);
		int l2=0;
		for(int i=0;i<n;i++)
			if(stu1[i].d<H&&stu1[i].c<H&&stu1[i].d>stu1[i].c&&stu1[i].d>=L&stu1[i].c>=L)
				{
				   l2++;
		           for(int j=l2-1;j<l2;j++)
					{   stu2[j].z=stu1[i].c+stu1[i].d;
					    stu2[j].num=stu1[i].num;
					    stu2[j].d=stu1[i].d;
					    stu2[j].c=stu1[i].c;
				   }
		         }
		for(int i=1;i<l2;i++)
			for(int j=l2-1;j>i-1;j--)
				if(stu2[j].z>stu2[j-1].z)
				{ 
				  String e=stu2[j-1].num;stu2[j-1].num=stu2[j].num;stu2[j].num=e;
		          a=stu2[j-1].d;stu2[j-1].d=stu2[j].d;stu2[j].d=a;
				  int b=stu2[j-1].c;stu2[j-1].c=stu2[j].c;stu2[j].c=b;
		         }
		for(int i=0;i<l2;i++)
			System.out.println(stu2[i].num+" "+stu2[i].d+" "+stu2[i].c);
		int l3=0;
		for(int i=0;i<n;i++)
			if(stu1[i].d<H&&stu1[i].c<H&&stu1[i].d<stu1[i].c&&stu1[i].d>=L&&stu1[i].c>=L)
				{
				   l3++;
		           for(int j=l3-1;j<l3;j++)
					{   stu2[j].z=stu1[i].c+stu1[i].d;
					    stu2[j].num=stu1[i].num;
					    stu2[j].d=stu1[i].d;
					    stu2[j].c=stu1[i].c;
				   }}
		for(int i=1;i<l3;i++)
			for(int j=l3-1;j>i-1;j--)
				if(stu2[j].z>stu2[j-1].z)
				{ 
				  String e=stu2[j-1].num;stu2[j-1].num=stu2[j].num;stu2[j].num=e;
		          a=stu2[j-1].d;stu2[j-1].d=stu2[j].d;stu2[j].d=a;
				  int b=stu2[j-1].c;stu2[j-1].c=stu2[j].c;stu2[j].c=b;
		         }
		for(int i=0;i<l3;i++)
			System.out.println(stu2[i].num+" "+stu2[i].d+" "+stu2[i].c);
		scan.close();
	}
}
