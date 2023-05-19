import java.util.Scanner;
public class CH04_MyDrawing {
    public static void main(String[] args)
    {
        System.out.println("Please input a number: ");
        Scanner sc = new Scanner(System.in);
        int s1 = sc.nextInt();
        for(int i=0; i<s1; i++)
        {
            for(int j=0; j<=i; j++)
            {
                System.out.print("*");
            }
            System.out.println("");
        }

        for(int i=s1; i>0; i--)
        {
            for(int j=i; j>0; j--)
            {
                System.out.print("*");
            }
            System.out.println("");
        }        
    }
}
