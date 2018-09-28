/* Write a program to read three positive numbers and print the min, max and average of the given */

import java.util.Scanner;
public class MinMaxAverage{

	public int firstNumber;
	public int secondNumber;
	public int thirdNumber;

	public MinMaxAverage(int firstNumber, int secondNumber, int thirdNumber){
		this.firstNumber = firstNumber;
		this.secondNumber = secondNumber;
		this.thirdNumber = thirdNumber;
	}

	public int CalculateMinOfThreeNumbers(){
		int min = ((firstNumber<secondNumber)&&(firstNumber<thirdNumber))?firstNumber:(secondNumber<thirdNumber)?secondNumber:thirdNumber;
		return min;
	}

	public int calculateMaxOfThreeNumbers(){
		int max = ((firstNumber>secondNumber)&&(firstNumber>thirdNumber))?firstNumber:(secondNumber>thirdNumber)?secondNumber:thirdNumber;
		return max;
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

		MinMaxAverage Object = new MinMaxAverage(first,second,third);

		System.out.println("\nMinimum of 3 given numbers "+first+", "+second+" & "+third+" is "+Object.CalculateMinOfThreeNumbers());
	    System.out.println("\nMaximum of 3 given numbers "+first+", "+second+" & "+third+" is "+Object.calculateMaxOfThreeNumbers());
	    System.out.println("\nAverage of 3 given numbers "+first+", "+second+" & "+third+" is "+Object.calculateAverage());
	}
}