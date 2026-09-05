import java.util.*;
class Program88
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        CountevenoddDigit cobj = new CountevenoddDigit();

        int iValue =  0;
        

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        cobj.CountDigits(iValue);

        


    }
}

class CountevenoddDigit
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
        System.out.println("Even No " +iCountOdd);
        


    }


}
