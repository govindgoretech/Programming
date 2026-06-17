 import java.util.*;

 class program141
 {
    public static void main(String[] args)
     {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
    
        System.out.println("Enter The Number of Elements");
        int iLength =sobj.nextInt();

        
        int Brr[]=new int[iLength];

        System.out.println("Enter The Elements: ");

        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
           Brr[iCnt]=sobj.nextInt();
        }

        System.out.println("Elements Of The Array Are: ");

        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }       
        
    }
 }
