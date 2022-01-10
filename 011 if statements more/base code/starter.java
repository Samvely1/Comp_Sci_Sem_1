import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	Scanner sc = new Scanner(System.in);
	System.out.println("type an integer");
	int x = sc.nextInt();
	
	System.out.println("type another integer");
	int y = sc.nextInt();
	
	System.out.println("type another integer");
	int z = sc.nextInt();
	
	boolean m = x!=y;
	boolean w = x==y; 
	
	if(m)
	{
	System.out.println("x and y are different");
	}
	
	
	if(w)
	{
		System.out.println("x and y are the same");
	}
	
	}
}
