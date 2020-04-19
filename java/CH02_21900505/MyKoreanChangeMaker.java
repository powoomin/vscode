import java.security.Key;
import java.util.Scanner;
public class MyKoreanChangeMaker{
    public static void main(String[] args)
    {
        int won;
        Scanner Keyboard = new Scanner (System.in);
        System.out.println("Enter a whole number from 1 to 10000.");
        won = Keyboard.nextInt();
        System.out.println(won+" won in coins can be given as : ");
        System.out.println((won/500)+" 500 won");
        won = won % 500;
        System.out.println((won/100)+" 100 won");
        won = won % 100;
        System.out.println((won/10)+" 10 won");
        won = won % 10;
        System.out.println((won/5)+" 5 won");
        won = won % 5;
        System.out.println((won/1)+" 1 won");
    }
}