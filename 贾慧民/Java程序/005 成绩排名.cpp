import java.util.Scanner;
public class Five {
	static int j;
	static int k;
	public static class student{
		String name;
		String num;
		float soc;	
	};
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		student stu[] = new student[10];
		for(int i=0;i<n;i++)
		{
			stu[i] = new student();
			stu[i].name = scan.next();
			stu[i].num = scan.next();
			stu[i].soc = scan.nextInt();
		}
		float max = stu[0].soc;
		for(int i=1;i<n;i++)
		    if(max<stu[i].soc)
			  {	
			     max=stu[i].soc;
			      j=i;
			}
		float min=stu[0].soc;
		for(int i=1;i<n;i++)
		   if(min>stu[i].soc)
			{	
			   min=stu[i].soc;
			    k=i;
		    } 
		System.out.println(stu[j].name+" "+stu[j].num);
		System.out.println(stu[k].name+" "+stu[k].num);
		scan.close();
	}
}
