/* Write a program to print the sum of alternate 7 divisible numbers between 1 and 50 */

public class AlternativeDivisbleNumbersFor7{

	private int someNumber;
	
	public AlternativeDivisbleNumbersFor7(int someNumber){
		this.someNumber = someNumber;
	}

	public long displayAlternativeDivisbleNumbersFor7(int range){
		long sum=0;
		int count=0;
		while(someNumber<=range){
			if(someNumber%7==0){
				count++;
				if(count%2==1){
					sum += someNumber;
					System.out.print(" "+someNumber);
				}
			}
			someNumber++;
		}
		System.out.println();
		System.out.println();
		return sum;
	}

	public static void main(String[] args) {
		int startNumber=1;
		int range=50;

		System.out.print("\nSum of squares of first 5 '3' divisible are as follows : \n\n");
		AlternativeDivisbleNumbersFor7 Object = new AlternativeDivisbleNumbersFor7(startNumber);
		System.out.print("Sum is : "+Object.displayAlternativeDivisbleNumbersFor7(range));
		System.out.println();
	}
}