import java.util.Scanner;
public class Main{
	public static void main(String [] args){
		Scanner sc = new Scanner(System.in);
		double n=sc.nextInt();
		int count =0;
		while(n!=1){
			if(isOs(n)){
				n =n/2;
				count++;
			}else{
				n=(3*n+1)/2;
				count++;
			}
		}
		System.out.println(count);
    
	}
	public static boolean isOs(double a){
		if(a==0||a%2==0){
			return true;
		}else{
			return false;
		}
	}
}
