import java.util.Scanner;

public class CH05_MyCalculator2 {
    public static void main(String[] args)
    {
        
        // CH05_MyCalculator2 mycal2 = new CH05_MyCalculator2();
        // mycal2.getinput();
        // mycal2.printresult();
        System.out.println("*** CH05_MyCalculator2 ***");
        System.out.print("Type 1st Num : ");
        Scanner sc = new Scanner(System.in);
        
        double num1;
        double num2;
        num1 = sc.nextDouble();
        System.out.print("Type 2st Num : ");
        num2 = sc.nextDouble();
        System.out.println("a + b = "+ (num1+num2));
        System.out.println("a - b = "+(num1 - num2));
        System.out.println("a * b = "+(num1 * num2));
        System.out.println("a / b = "+(num1 / num2));

    }
}