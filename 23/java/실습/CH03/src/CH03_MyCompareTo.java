import java.util.Scanner;

public class CH03_MyCompareTo {
    public static void main(String[] args) {

        String s1;
        String s2;
        String Bool;
        String n = "n";
        while (true) {
            System.out.println("Please input two words : ");
            Scanner sc = new Scanner(System.in);
            s1 = sc.next();
            s2 = sc.next();
            System.out.println(s1 + " is before " + s2);
            System.out.println("Want to end the program?? Enter y for yes or n for no.");
            Bool = sc.next();
            System.out.println(Bool+"  "+n);

            if (Bool == n)
            {
                System.out.println("dmkdkdkdkdkdkkdkdkdkkdkdk");
                break;
            }
        }
        System.out.println("nend the program!!");
        
    }
}

