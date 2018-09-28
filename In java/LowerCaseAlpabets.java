/* Write a program to print alphabets in lowercase from 'a' to 'z' */

public class LowerCaseAlpabets{
	
	private char someChar;

	public LowerCaseAlpabets(char someChar){
		this.someChar = someChar;
	}

	public void displayCharacters(char range){
		while(someChar<=range){
			System.out.print(" "+someChar);
			someChar++;
		}
	}

	public static void main(String[] x){
		char startChar='a';
		char range='z';
		System.out.print("\nPrint alphabets in lowercase using while loop is as follows : \n\n");
			
		LowerCaseAlpabets Object = new LowerCaseAlpabets(startChar);
		Object.displayCharacters(range);
		System.out.println();
	}
}
