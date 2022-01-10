import java.util.Scanner;
class starter

{
	public static String div3(int x, int y){
		int product = x*y;
		
		if(product%3 == 0){
			return ("it is divisible by");
	}
	else{
		return ("it is not divisible by 3");
	}

	}	
	
	public static void main(String args[]) {

	Scanner sc = new Scanner(System.in);
	int a = sc.nextInt();
	int b = sc.nextInt();
	;
	System.out.println(div3(a,b));
	
	}
}
