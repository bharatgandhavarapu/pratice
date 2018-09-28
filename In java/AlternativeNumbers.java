/* Write a program to print alternative numbers from 50 to 100 */

public class AlternativeNumbers{
	
	public int startNumber;

	public AlternativeNumbers(int startNumber){
		this.startNumber = startNumber;
	}

	public void displayAlternativeNumbers(int range){
		while(startNumber<=range){
			if(startNumber%2==0)
				System.out.print(" "+startNumber);
			startNumber++;
		}
	}

	public static void main(String x[]){
		int startNumber = 50;
		int range = 100;
		System.out.print("\n Alternative numbers from 50 to 100 are as follows : \n\n");

		AlternativeNumbers Object = new AlternativeNumbers(startNumber);
		Object.displayAlternativeNumbers(range);
		System.out.println();
	}
}