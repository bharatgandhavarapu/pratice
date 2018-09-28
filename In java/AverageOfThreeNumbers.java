/* Write a program to print the average of the three given numbers */

import java.util.Scanner;
public class AverageOfThreeNumbers{
	private int firstNumber;
	private int secondNumber;
	private int thirdNumber;

	public AverageOfThreeNumbers(int firstNumber, int secondNumber, int thirdNumber){
		this.firstNumber = firstNumber;
		this.secondNumber = secondNumber;
		this.thirdNumber = thirdNumber;
	}

	public double calculateAverage(){
		return ((firstNumber+secondNumber+thirdNumber)/3.0);
	}
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("\nEnter first number : ");
		int first = input.nextInt();
		System.out.print("\nEnter second number : ");
		int second = input.nextInt();
		System.out.print("\nEnter third number : ");
		int third = input.nextInt();

		AverageOfThreeNumbers Object = new AverageOfThreeNumbers(first,second,third);

		System.out.println("\nAverage of 3 given numbers "+first+", "+second+" & "+third+" is "+Object.calculateAverage());
	}
}