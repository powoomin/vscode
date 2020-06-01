public class inheritanceDemo 
{
    public static void main(String[] args)
    {
        Student s = new Student( );
        s.setName("Warren Peace");
        // setName is inherited from the class Person
        s.setStudentNumber(1234);
        s.writeOutput( ); //@@ }
    }
}