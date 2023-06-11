import java.util.Scanner;
import javax.swing.*;
public class MyKoreanChangeMakerWindow {
	public static void main(String[] args)
	{
        int num_500=0, num_100=0, num_10=0, num_5=0, num_1=0;

        String amountString =
        		JOptionPane.showInputDialog(
        				"Enter a whole number froom 1 to 10000.\n"
        				);
        System.out.println("Enter a whole number from 1 to 10000.");
        int change= Integer.parseInt(amountString);
        
        num_500 = change/500;
        num_100 = change%500/100;
        num_10 = change%100/10;
        num_5 = change%10/5;
        num_1 = change%5/1;

        JOptionPane.showMessageDialog(null, 
        		change+" won is coins can be given as:\n"
        		+ num_500 + " 500 won\n"
        		+ num_100 + " 100 won\n"
        		+ num_10 + " 10 won\n"
        		+ num_5 + " 5 won\n"
        		+ num_1 + " 1 won\n"
        		);
        
        System.exit(0);
	}
}
