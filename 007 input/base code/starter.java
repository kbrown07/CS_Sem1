import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.print("I love to learn coding remotely."); 
		Scanner sc = new Scanner(System.in);
	    System.out.println("What is your name?");
	    String text = sc.nextLine();
	    
	    System.out.println("What is your age");
	    int number1 = sc.nextInt();
	    
	    System.out.println("What month were you born");
	    int number2 =  sc.nextInt();

	    System.out.println("What day were you born");
	    int number3 = sc.nextInt();

		System.out.println("What year were you born");
		int number4 = sc.nextInt();
		
		System.out.println("If i have a dollar and 2 quarters, how much do i have");
		double number = sc.nextDouble();
		
		System.out.println("My first name is " + text);
		System.out.println("My age is " + number1 );
		System.out.println("My birthday month is " + number2 );
		System.out.println("My birthday day is " + number3  );
		System.out.println("My birthday year is " + number4 );
		System.out.println("A buck and fifty is " + number );
		
		
		
		
		
		
		
		
		
	}
	
	
}

	
		