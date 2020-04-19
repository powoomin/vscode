
import java.util.Scanner;

public class CH04_MySummation 
{
    public static void main(String[] args) 
    {
        int a,b = 0;
        Scanner KB = new Scanner (System.in);
        System.out.println("Please input a number : ");
        a = KB.nextInt();
        for(int i=1;i<=a;i++)
        {  
            b += i;
        }
        System.out.println("The summation from 1 to "+a+" is "+b);
    }
}
