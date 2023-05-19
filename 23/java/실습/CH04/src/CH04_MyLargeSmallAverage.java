import java.util.Scanner;

public class CH04_MyLargeSmallAverage {
    public static void main(String[] args)
    {
        System.out.println("This program allows you to enter a list of positive inegers");
        System.out.println("(terminated by a -1) then displays the largest value,");
        System.out.println("smallest value, and average of the list of numbers,");
        System.out.println("not including the final (negative) value that ends the list.");

        double count =0.0;
        int largest_value = 0x0;
        int smallest_value = 0x0;
        int sum = 0;
        double Average;
        while(true)
        {
            System.out.println("Please input a number: ");
            Scanner sc = new Scanner(System.in);
            int s1 = sc.nextInt();
            if(s1 == -1) break;
            sum = sum + s1;

            if(largest_value == 0x0 && smallest_value == 0x0)
            {
                largest_value = s1;
                smallest_value = s1;
            }
            else
            {
                if(s1 > largest_value)
                    largest_value = s1;
                if(s1 < smallest_value)
                    smallest_value = s1;
            }
            count++;
        }
        Average = sum / count;

        System.out.println("For the "+count+" numbers you entered");
        System.out.println("the largest value = "+largest_value);
        System.out.println("the smallest value = "+smallest_value);
        System.out.println("and the average is = "+Average);
    }
}
