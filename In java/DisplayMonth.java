/* Write a program to read the month in integer and print the month name. Print "Invalid month" message if invalid number is given */

import java.util.Scanner;
public class DisplayMonth{
	
	private int month;

	public DisplayMonth(int month){
		this.month = month;
	}

	public void displayMonthName(){
		switch(month){
			case 1 : System.out.print("\nIt's January\n");
                 break;
	        case 2 : System.out.print("\nIt's February\n");
	                 break;
	        case 3 : System.out.print("\nIt's March\n");
	                 break;
	        case 4 : System.out.print("\nIt's April\n");
	                 break;
	        case 5 : System.out.print("\nIt's May\n");
	                 break;
	        case 6 : System.out.print("\nIt's June\n");
	                 break;
	        case 7 : System.out.print("\nIt's July\n");
	                 break;
	        case 8 : System.out.print("\nIt's August\n");
	                 break;
	        case 9 : System.out.print("\nIt's September\n");
	                 break;
	        case 10 : System.out.print("\nIt's October\n");
	                 break;
	        case 11 : System.out.print("\nIt's November\n");
	                 break;
	        case 12 : System.out.print("\nIt's December\n");
	                 break;
	        default: System.out.print("\nInvalid Month code\n");
		}
	}

	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		System.out.print("\nEnter a month code to print its equivalent month : ");
		int Month = input.nextInt();

		DisplayMonth Object = new DisplayMonth(Month);
		Object.displayMonthName();
	}
}