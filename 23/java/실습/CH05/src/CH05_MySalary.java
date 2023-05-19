public class CH05_MySalary 
{
    public static void main(String[] args) 
    {
        CH05_MySalary testSal = new CH05_MySalary();
        testSal.setBasic();
        System.out.println("After setBasic() testSal = " + testSal.salaryIs());
        int j,k;
        String junk;

        for(j = 0; j < 3; j++) 
        {
            System.out.println("Loop count = " + j);
            testSal.promote();
            System.out.println("After promote() in loop " + "using printSalary(): ");
            testSal.printSalary();
            System.out.println("Using salaryIs() to return value: "+ testSal.salaryIs());
        }
        for(k = 0; k < 3; k++) 
        {
            System.out.println("Loop count = " + k);
            testSal.demote();
            System.out.println("After demote() in loop " + "using printSalary(): ");
            testSal.printSalary();
            System.out.println("Using salaryIs() to return value: "+ testSal.salaryIs());

        } 
    }  
}

