/* Write a program to check the given number for the divisibility of 3 & 4 */

import java.util.Scanner;
public class DivisibleBy3And4{
	
	private int someNumber;

	public DivisibleBy3And4(int someNumber){
		this.someNumber = someNumber;
	}

	public void calculateDivisibility(){
		if(someNumber%3==0 && someNumber%4==0)
			System.out.println("\n"+someNumber+" is divisible by both 3 & 4");
		else
			System.out.println("\n"+someNumber+" is not divisible by both 3 & 4");
	}

	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("\nEnter a number to check whether it is divisibility by both 3 & 4 : ");
		int aNumber = input.nextInt();

		DivisibleBy3And4 Object = new DivisibleBy3And4(aNumber);

		Object.calculateDivisibility();
	}
}