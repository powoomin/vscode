import java.util.Scanner;

public class CH04_MYDrawing 
{
    public static void main(String[] args)
    {
        Scanner KB= new Scanner (System.in);
        System.out.println("Please input a number : ");
        int a = KB.nextInt();
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.print("\n");
        }
        for(int i=0;i<a;i++)
        {
            for(int j=i;j<a;j++)
            {
                System.out.print("*");
            }
            System.out.print("\n");

        }
    }

}