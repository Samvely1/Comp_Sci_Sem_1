import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.print("I love to learn coding remotely."); 
		Scanner sc = new Scanner(System.in);
		System.out.println("type a number between 1 and 1000");
		int x = sc.nextInt();
		Random rand = new Random();
		int z = rand.nextInt(1001);
		if(x==z)
		{
			System.out.println("correct");
		}
		else if(x!=z)
		{
			System.out.println("wrong answer");
			System.out.println("The right answer is " + z);
		}
		
	}
}
