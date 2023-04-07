import java.util.Scanner;
public class CH04_MySummation {
    public static void main(String[] args)
    {
        System.out.println("Please input a number: ");
        Scanner sc = new Scanner(System.in);
        int s1 = sc.nextInt();
        
        int sum = 0;

        for(int i = 0 ; i<s1;i++)
        {
            sum = sum + i + 1;
        }
        
        System.out.println("The summation from 1 to "+ s1+" is\n"+sum);
    }
}
