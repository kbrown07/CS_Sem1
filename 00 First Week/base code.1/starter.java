

import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
	
		
		System.out.println("Do you like pizza, respond in 1 as in yes and 2 as in no");
		int ans = sc.nextInt();
		
		if(ans == 1){System.out.println("Do you like pepperoni pizza?"); int pizza = sc.nextInt(); if(pizza == 1){System.out.println("Pepperoni is the best topping");} else if(pizza == 2){System.out.println("Pepperoni is so spicy");}} 
		else if(ans == 2){System.out.println("I dont like pizza too");}
		
		System.out.println("Do you like pasta respond in 1 as in yes and 2 as in no");
		int ans2 = sc.nextInt();
		if(ans2 == 1){System.out.println("Pasta is my favorite!!!");}
		else if(ans2 == 2){System.out.println("Pasta is so bad ");}
		
		System.out.println("Do you like Steak respond in 1 as in yes and 2 as in no");
		int ans3 = sc.nextInt();
		if(ans3 == 1){System.out.println("Steak tastes so good");}
		else if(ans3 == 2){System.out.println("steak is too expensive ");}
		
		System.out.println("Do you like french fries respond in 1 as in yes and 2 as in no");
		int ans4 = sc.nextInt();
		if(ans4 == 1){System.out.println("French fries are crispy and perfect");}
		else if(ans4 == 2){System.out.println("french fries are so unhealthy");}
		
		System.out.println("Do you like chicken tenders respond in 1 as in yes and 2 as in no");
		int ans5 = sc.nextInt();
		if(ans5 == 1){System.out.println("chicken tender tastes so good");}
		else if(ans5 == 2){System.out.println("french fries are better");}
		
		
		
	
		
		

		
		
	}
}       
