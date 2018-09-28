/* Write a program to print the product of two given numbers */

import java.util.Scanner;
public class ProductOfTwoNumbers{
	private int firstNumber;
	private int secondNumber;

	public ProductOfTwoNumbers(int firstNumber, int secondNumber){
		this.firstNumber = firstNumber;
		this.secondNumber = secondNumber;
	}

	public long calculateProduct(){
		return (firstNumber*secondNumber);
	}
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("\nEnter first number : ");
		int first = input.nextInt();
		System.out.print("\nEnter second number : ");
		int second = input.nextInt();

		ProductOfTwoNumbers Object = new ProductOfTwoNumbers(first,second);

		System.out.println("\nProduct of 2 given numbers "+first+" & "+second+" is "+Object.calculateProduct());
	}
}