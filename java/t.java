import java.util.Scanner;
class t
{

    public static void main(String[] args)
    {
        print();
        typ();
        floating_point();
        implicit_conversion();
        explicit_converstion();
        ternary_operator();
        conditional_statements();
    }
    public static void print()
    {
        System.out.println(3);
        System.out.println(3.14);
        System.out.println("자바!");
        System.out.println("Hello "+"World :)");
        System.out.println("원주율 = "+"3.14"+" 이다");
    }
    public static void typ()
    {
        int num = 10;
        System.out.println("num = "+num);

    }
    public static void floating_point()
    {
        double num = 0.1;
        float num2 = 0.1f;
        for(int i = 0;i<1000;i++)
        {
            num += 0.1;
            num2 += 0.1;
        }
        System.out.println("double num = "+num);
        System.out.println("float num = "+num2);
        double num3 = 1.23456789;
        float num4 = 1.23456789f;
        System.out.println("double num3 = "+num3);
        System.out.println("float num4 = "+num4);
    }
    public static void implicit_conversion()
    {
        double num1 = 10;
        float num2 = 10f + 0.14f;
        double num3 = num2 + num1;
        System.out.println("num1 = "+num1+"\n"+"num2 = "+num2+"\n"+"num3 = "+num3);
    }
    public static void explicit_converstion()
    {
        int num1 =9, num2 = 2;
        double result1 = num1 / num2;
        double result2 = (double)num1 / num2;
        System.out.println("result1 = "+result1);
        System.out.println("result2 = "+result2);
    }
    public static void ternary_operator()
    {
        //조건식?반환값1:반환값2
        int num1 = 5, num2 = 7;
        int result;
        result = (num1 - num2 > 0) ? num1 : num2;
        System.out.println("두 정수 중 더 큰 수는 "+result +"입니다");
    }
    public static void conditional_statements()
    {
        Scanner keybord = new Scanner(System.in);
        System.out.print("input ch : ");
        String str = keybord.nextLine();
        System.out.println("String = "+str);
        char ch = 'J';
        if(ch>='a'&& ch<='z')
        {
            System.out.println("ch는 소문자 입니다");
        }
        else if(ch>='A'&&ch <='Z')
        {
            System.out.println("ch는 대문자 입니다");
        }
        else 
        {
            System.out.println("ch는 영문자가 아닙니다");
        }
        
    }
}