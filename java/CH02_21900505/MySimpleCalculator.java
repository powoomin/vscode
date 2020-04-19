
import java.util.Scanner;

public class MySimpleCalculator {
    public static void main(String[] args) {
        int a,b;
        System.out.println("Please input two numbers: ");
        Scanner Keyboard = new Scanner (System.in);
        a = Keyboard.nextInt();
        b = Keyboard.nextInt();
        System.out.println("a + b = "+ (a+b));
        System.out.println("a - b = "+ (a-b));
        System.out.println("a * b = "+ (a*b));
        System.out.println("a / b = "+ (a/b));
    }

}