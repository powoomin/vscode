import java.util.Scanner;
public class REP_Chap05 {
    public static void main(String[] args)
    {
       int[] num = new int[6];
       double sum=0;
       String[] a = {"a","b","c","d","e","f"};
       System.out.print("Input a,b,c,d,e,f : ");
       Scanner n = new Scanner(System.in);
       for(int i=0; i<6; i++)
       {
            num[i] = n.nextInt();
            sum += num[i];
       }

       double p = 100 / sum;

       double[] p_num = new double[6];
       for(int i=0; i<6; i++)
       {
        p_num[i] = num[i] * p;
       }

       for(int i=0; i<10; i++)
       {
            System.out.print("*****");
       }
       System.out.println("");

       for(int i=0 ;i<6; i++)
       {
            System.out.print(a[i]+" = ");
            for(double j=0; j < p_num[i]/2; j++)
            {
                System.out.print("*");
            }
            System.out.println("");
       }


    }
}
