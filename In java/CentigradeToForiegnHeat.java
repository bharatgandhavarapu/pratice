/* Write a program to convert the given centigrade temperature to foreign heat */

import java.util.Scanner;
public class CentigradeToForiegnHeat{
	
	private int temperature;

	public CentigradeToForiegnHeat(int temperature){
		this.temperature = temperature;
	}

	public double calculateTemperature(){
		double temperatureConvetion = ((temperature+32)*9/5);
		return temperatureConvetion;
	}

	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("\nEnter temperature in centigrade : ");
		int aNumber = input.nextInt();

		CentigradeToForiegnHeat Object = new CentigradeToForiegnHeat(aNumber);

		System.out.println("\nAfter convertion from centigrade to foriegnheat value is "+aNumber+" --> "+Object.calculateTemperature());
	}
}