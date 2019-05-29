import java.util.Scanner;
public class pinyin{
	public static void main(String[] args) {
		Scanner shuzu=new Scanner(System.in);
			int sum=0,i;
			String pinyin[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
			String str=shuzu.next();
			for(i=0;i<str.length();i++)
			{
				sum=sum+(str.charAt(i)-48);
			}
			String sumstr = sum + "";//将各位数字的和转换成字符串形式，用作拼音数组的索引
			for(i=0;i<sumstr.length(); i++)
			{
				if(i != 0)
					System.out.print(" ");//格式化输出，第一个输出前无空格
				System.out.print(pinyin[sumstr.charAt(i) - 48]);//输出结果
			}
			shuzu.close();
			
	}
}
