/* Write a program to print first 5 alternate 7 divisible numbers after 100 */

public class FirstFiveAlternativesOf7{
	
	private int someNumber;

	public FirstFiveAlternativesOf7(int someNumber){
		this.someNumber = someNumber;
	}

	public void displayFirstFiveAlternativesOf7(int range){
		int count = range;
		while(count!=0){
			if(someNumber%7==0){
				count--;
				if(count%2==1){
					System.out.print(" "+someNumber);
					count--;
				}
			}
			someNumber++;
		}
	}

	public static void main(String[] args) {
		int startNumber = 100;
		int range =10;
		System.out.print("\nFirst 5 alternate 7 divisible numbers after 100 are as follows : \n\n");
		FirstFiveAlternativesOf7 Object = new FirstFiveAlternativesOf7(startNumber);
		Object.displayFirstFiveAlternativesOf7(range);
		System.out.println();
	}
}