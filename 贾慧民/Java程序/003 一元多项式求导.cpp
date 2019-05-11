import java.util.Scanner;;
public class Three {
	public static void main(String []arges) {
		Scanner scan = new Scanner(System.in);
		int x[] = new int [8];
		for(int i=0;i<8;i++)
			x[i] = scan.nextInt();
		D(x);
		scan.close();
	}
    public static void D(int []x) 
    {
    	for(int y=1;y<9;y++)
   	 {
   		if(y%2==0)
   		  if(y!=0)
   	        x[y-1]=x[y-1]-1;
   	    if(y%2!=0)
   			x[y-1]=x[y-1]*x[y];
   	}
   	for(int i=0;i<8;i++)
   		System.out.println(x[i]);
    }  
}
