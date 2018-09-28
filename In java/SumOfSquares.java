/* Write a program to print the sum of squares of first 5 three divisible numbers from 100 */

public class SumOfSquares{
	
	private int someNumber;

	public SumOfSquares(int someNumber){
		this.someNumber = someNumber;
	}

	public long displaySumOfSquares(int range){
		long sum=0;
		int count  = range;
		while(count<=5){
			if(someNumber%3==0){
				System.out.print(" "+someNumber);
				sum += someNumber *  someNumber;
				count++;
			}
			someNumber++;
		}
		System.out.println();
		System.out.println();
		return sum;
	}

	public static void main(String[] args) {
		int startNumber=100;
		int range = 1;

		System.out.print("\nSum of squares of first 5 '3' divisible are as follows : \n\n");
		SumOfSquares Object = new SumOfSquares(startNumber);
		System.out.print("Sum is : "+Object.displaySumOfSquares(range));
		System.out.println();
	}
}