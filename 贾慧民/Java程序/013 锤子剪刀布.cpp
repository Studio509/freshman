import java.util.Scanner;
public class Thirteen {
	public static void main(String []arges) {
	Scanner scan = new Scanner(System.in);	
	String  str[][] = new String [100][2];
	int n = scan.nextInt();
	int a ,i;
	int b = 0;   int c = 0;
	int d = 0;   int e = 0;
	int f = 0;   int g = 0;
	int j = 0;   int k = 0;
	int l = 0;   
	for(i=0;i<n;i++)
		 for(a=0;a<2;a++)
	      str[i][a] = scan.next();//输入交锋情况
		for(i=0;i<n;i++)
 			{
			  char v = str[i][0].charAt(0);
			  char s = str[i][1].charAt(0);
			if(v=='C')
				{if(s=='C')
				    j++;//（平）
		        if(s=='J')
				  {   k++;//（甲胜）
		              b++;/*(甲用C赢)*/}
				if(s=='B')
					{l++;//（乙胜）
				    e++;/*(乙用B赢)*/}}
			if(v=='J')
				{if(s=='C')
				{ l++;//（乙胜）
				    f++;/*(乙用C赢)*/} 
		            
		        if(s=='J')
				  j++;//（平）
				if(s=='B')
			   {   k++;//（甲胜）
		            c++;/*(甲用J赢)*/}}
			if(v=='B')
				{if(s=='C')
				   {   k++;//（甲胜）
		            d++;/*(甲用B赢)*/}
		        if(s=='J')
				{ l++;//（乙胜）
				    g++;/*(乙用J赢)*/}
				if(s=='B')
					j++;}}
		System.out.println(k+" "+j+" "+l);//输出甲的赢、平、输情况
		System.out.println(l+" "+j+" "+k);//输出乙的赢、平、输情况
	        if(b>c)    //开始判断甲赢得最多的手势
				if((c>d||c==d)||(c<d&&d<b))
					System.out.print("C ");     //输出赢得最多的手势 
			if(c>b)
			   if((b>d||b==d)||(b<d&&d<c))
				   System.out.print("J ");     //输出赢得最多的手势 
			if(d>b)    //结束判断甲赢得最多的手势
			   if((b>c||b==c)||(b<c&&c<d))
				   System.out.print("B ");   //输出赢得最多的手势 
			 if(g>e)    //开始判断乙赢得最多的手势
				if((e>f||e==f)||(e<f&&f<g))
					System.out.print("J ");     //输出赢得最多的手势 
			if(e>g)
			   if((g>f||g==f)||(g<f&&f<e))
				   System.out.print("B ");      //输出赢得最多的手势 
			if(f>g)    //结束判断乙赢得最多的手势
			   if((g>e||g==e)||(g<e&&e<f))
				   System.out.print("C ");         //输出赢得最多的手势  
	scan.close();
	}
}
