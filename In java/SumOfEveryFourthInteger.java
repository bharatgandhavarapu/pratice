/* Write a program to print the sum of every fourth integer, beginning with 5 for all values less than 100 */

public class SumOfEveryFourthInteger{
	
	private int someNumber;

	public SumOfEveryFourthInteger(int someNumber){
		this.someNumber = someNumber;
	}

	public long displaySumOfEveryFourthInteger(int range){
		int count=0;
		long sum=0;
		while(someNumber<=range){
			if(count%4==0){
				System.out.print(" "+someNumber);
				sum += someNumber;
			}
			someNumber++;
			count++;
		}
		System.out.println();
		System.out.println();
		return sum;
	}

	public static void main(String[] args) {
		int startNumber=5;
		int range=100;
		System.out.print("\nSum of Every 4 integer number beginning with 5 are as follows : \n\n");
		SumOfEveryFourthInteger Object = new SumOfEveryFourthInteger(startNumber);
		System.out.print("Sum is : "+Object.displaySumOfEveryFourthInteger(range));
		System.out.println();
	}
}