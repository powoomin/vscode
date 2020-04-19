import java.util.Scanner;
class FirstProgram
{
    public static void main(String [] args)
    {
        System.out.println("Hello out there.");
        System.out.println("I will add two numbers for you.");
        System.out.println("Enter two whole numbers on a line : ");
        int n1, n2;
        Scanner Keyboard = new Scanner (System.in);
        n1 = Keyboard.nextInt();
        n2 = Keyboard.nextInt();
        System.out.println("The sum of those two numbers is  ");
        System.out.println(n1 + n2);
    }

}