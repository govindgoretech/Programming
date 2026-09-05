 import java.util.*;

 class program140
 {
    public static void main(String[] args)
     {
        Scanner sobj = new Scanner(System.in);

        int Arr[]= {10,20,30,40};

        System.out.println(Arr.length);

        
     //Bad Programming Practice
        for( int iCnt=0; iCnt<Arr.length; iCnt++)
        {

            System.out.println(Arr[iCnt]);
        }

        System.out.println(iCnt);  //Error


        
    }
 }
