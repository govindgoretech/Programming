// Input :  7
// Output : A   *   B   *   C   *   D

import java.util.*;

class program184
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++)
        {
            if(iCnt %2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(ch+"\t");
                ch++;
            }
        }

        System.out.println();
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the enumebr of elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}