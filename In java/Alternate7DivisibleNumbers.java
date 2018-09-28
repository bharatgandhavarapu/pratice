/* Write a program to print alternate 7 divisible numbers between 50 and 100 */

public class Alternate7DivisibleNumbers{
	
	private int someNumber;

	public Alternate7DivisibleNumbers(int someNumber){
		this.someNumber = someNumber;
	}

	public void display7DivisibleNumbers(int range){
		int count=0;
		while(someNumber<=range){
			if(someNumber%7==0){
				count++;
				if(count%2==1)
					System.out.print(" "+someNumber);
			}
			someNumber++;
		}
	}

	public static void main(String[] args) {
		int startNumber=50;
		int range = 100;
		System.out.print("\nAlternate 7 divisible Numbers from 50 to 100 are as follows: \n\n");
		Alternate7DivisibleNumbers Object = new Alternate7DivisibleNumbers(startNumber);
		Object.display7DivisibleNumbers(range);
		System.out.println();
	}
}