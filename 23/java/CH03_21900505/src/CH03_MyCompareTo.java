import java.util.Scanner;
public class CH03_MyCompareTo {
	public static void main(String[] args)
	{
		String s1, s2, s3;
		while(true)
		{
			System.out.println("Please input two words: ");
			Scanner keyboard = new Scanner (System.in);
			s1 = keyboard.next( );
			s2 = keyboard.next( ); 
			System.out.println(s1+" is before "+s2);
			System.out.println("Want to end the program??");
			System.out.println("Enter y for yes or n for no. ");
			s3 = keyboard.next();
			if(s3.compareTo("n") == 0)
				break;
		}
	}
}
