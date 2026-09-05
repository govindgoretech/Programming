import java.util.*;
class Program91
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        sumevenDigit cobj = new sumevenDigit();

        int iValue =  0;
        

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        cobj.CountDigits(iValue);

        


    }
}

class sumevenDigit
{
    public int  CountDigits(int iNo)
    {
        
        int iDigit =0;
        int iCountEven = 0, iCountOdd=0;
        while(iNo!=0 )
        {
           iDigit = iNo%10;
           if(iDigit % 2 ==0 )
           {
              iCountEven++;
              
            
           }
            else(iDigit % 2 !=0 )
           {
              iCountOdd++;  
            
           }
           
           
           iNo=iNo/10;


        }
        System.out.println("Even No " +iCountEven);
        System.out.println( "Sumation of No " +iCountOdd);
        


    }


}
