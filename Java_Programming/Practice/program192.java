
import java.util.*;

class program192
{
    public static void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i<=iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 2;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();
        
        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Display(iValue1,iValue2);
    }
}