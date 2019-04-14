import java.util.Scanner; 
public class 猜想 {
	public static void main(String []args)throws java.io.IOException { 
		int i=0;
		int j=0;
        System.out.println("请输入一个数:");
        Scanner input= new Scanner(System.in);
        int num=input.nextInt();                   
        System.out.println("从"+num+"变为1需要次数：");  
        for(i=1;i>0;i++)
        {
      	  if(num%2==0)
           {
      		 num=num/2;
               j++; 
            }
          else if(num==1)  break;
            else 
             { 
      		   num=(3*num+1)/2;
                 j++;  
      	}
        }
        System.out.println(j);
}
}
