/* Write a program to print 1 to 10 numbers */

import java.util.Scanner;
public class Print1To10{
	
	private int startNumber;

	public Print1To10(int startNumber){
		this.startNumber = startNumber;
	}

	public void display1to10Numbers(int range){
		while(startNumber<=range){
			System.out.print(" "+startNumber);
			startNumber++;
		}
	}

	public static void main(String[] x){
		int startNumber=1;
		int range=10;
		System.out.print("Print 1 to 10 Numbers using while loop is as follows : \n\n");
			
		Print1To10 Object = new Print1To10(startNumber);
		Object.display1to10Numbers(range);
		System.out.println();
	}
}
