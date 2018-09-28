/* Write a program to print 3 divisible numbers between 1 and 50 */

public class DivisibleNumbersOf3{

	private int someNumber;

	public DivisibleNumbersOf3(int someNumber){
		this.someNumber = someNumber;
	}	

	public void display3DivisibleNumbers(int range){
		while(someNumber<=range){
			if(someNumber%3==0)
				System.out.print(" "+someNumber);
			someNumber++;
		}
	}

	public static void main(String[] args) {
		int startNumber=1;
		int range = 50;
		System.out.print("\n3 Divibility numbers from 1 to 50 are as follows : \n\n");
		DivisibleNumbersOf3 Object = new DivisibleNumbersOf3(startNumber);
		Object.display3DivisibleNumbers(range);
		System.out.println();
	}
}