
import java.util.Scanner;


class Grade
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);
        int iValue=0;
        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        Logic lobj = new Logic();
        lobj.Grade(iValue);


      

       

    }
    

}

class Logic
{
    void Grade(int iMarks)
    {
      
          if(iMarks>=90)
          {
            System.out.println("+A Grade");
          }
          else if(iMarks<90 && iMarks>=80)
          {
            System.out.println("A Grade");

          }
          else if(iMarks<80 && iMarks>=70)
          {
            System.out.println("B+ Grade");

          }
          else if(iMarks<70 && iMarks>=60)
          {
            System.out.println("B Grade");

          }
          else if(iMarks<60 && iMarks>=50)
          {
            System.out.println("C+ Grade");

          }
          else if(iMarks<50 && iMarks>=35)
          {
            System.out.println("C Grade");

          }
          else if(iMarks<35)
          {
            System.out.println("FAIL");

          }


      }
      
     

}

