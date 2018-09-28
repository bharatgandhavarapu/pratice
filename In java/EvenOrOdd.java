/* Write a program to check the given number for even or odd */

import java.util.Scanner;

public class EvenOrOdd{

	private int someNumber;

	public EvenOrOdd(int someNumber){
		this.someNumber = someNumber;
	}

	public void checkEvenOrOdd(){
		if(someNumber%2==0)
			System.out.println("\n"+someNumber+" is Even");
		else
			System.out.println("\n"+someNumber+" is Odd");
	}

	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("\nEnter a number to check whether it is even or odd : ");
		int aNumber = input.nextInt();

		EvenOrOdd Object = new EvenOrOdd(aNumber);

		Object.checkEvenOrOdd();
	}
}