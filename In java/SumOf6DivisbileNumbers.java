/* Write a program to print the sum of all 6 divisible numbers between 1 and 50 */

public class SumOf6DivisbileNumbers{
	
	private int someNumber;

	public SumOf6DivisbileNumbers(int someNumber){
		this.someNumber = someNumber;
	}

	public long displaySumOf6DivisbileNumbers(int range){
		long sum=0;
		while(someNumber<=range){
			if(someNumber%6==0){
				System.out.print(" "+someNumber);
				sum += someNumber;
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
		System.out.print("\nSum of Every 4 integer number beginning with 5 are as follows : \n\n");
		SumOf6DivisbileNumbers Object = new SumOf6DivisbileNumbers(startNumber);
		System.out.print("Sum is : "+Object.displaySumOf6DivisbileNumbers(range));
		System.out.println();
	}
}