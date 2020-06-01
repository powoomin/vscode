public class Student_extends_Person {
    private int studentNumber;
    public Student()
    {
        super();
        studentNumber = 0;//Indicating no number yet
    }

    public Student(String initialName, int initialStudentNumber)    
    {
        super(initialName);
        studentNumber = initialStudentNumber;
    }

    public void reset(String newName, int newStudentNumber)
    {
        setName(newName);
        studentNumber = newStudentNumber;
    }

    public int getStudentNumber()
    {
        return studetnNumber;
    }

    public void setStudentNumber(int newStudentNumber)
    {
        studentNumber = newStudentNumber;
    }

    public void writeOutput() ///
    {
        System.out.println("Name : "+getNmae());
        System.out.println("Student Nubmer : "+studentNumber);
    }

    public boolean equals(Student otherStudent)
    {
        return (this.sameName(otherStudent) && (this.studentNumber == otherStudent.studentNumber));
    }

    public String toString()
    {
        return("Name : "+getName() + "\nStudent number : "+studentNumber);
    }
}