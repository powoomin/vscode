/*
프로그램을 계속할지 y,n 으로 물어보기
계속하게 되면 두 문자를 입력받고,
그 문자의 선행관걔를 표시함
do ...while 문 활용하기
*/

import java.util.Scanner;

public class MyCompareTo {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        String Bool;
        while (true) {
            System.out.print("Please input two words : ");
            String word1 = kb.next();
            String word2 = kb.next();

            if (word1.compareTo(word2) < 0) {
                System.out.print(word1 + " precedes " + word2 + " in lexicographic ordering\n");
            } else if (word1.compareTo(word2) > 0) {
                System.out.print(word1 + " follows " + word2 + " in lexicographic ordering\n");
            } else {
                System.out.print(word1 + " equals " + word2+"\n");
            }
            System.out.print("Want to end the program??\n");
            while(true){
                System.out.print("Enter Y for yes or N for no : ");
                Bool = kb.next();
                if(Bool.equals("y") || Bool.equals("Y")) break;
                else if(Bool.equals("n")|| Bool.equals("N")) break;
            }
            if(Bool.equals("n")||Bool.equals("N")){
                System.out.print("end the program :)\n");
                break;
            }

        }
    }
}