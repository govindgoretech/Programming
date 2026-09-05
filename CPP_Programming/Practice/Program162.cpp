#include<iostream>
using namespace std;

class ArrayX
{
   public:
       int *Arr;
       int iSize;
     
       ArrayX(int X)
       {
        
        iSize=X;                 
        Arr = new int[iSize];   

       }
       
       ~ArrayX()
       {
       
         delete []Arr;
       }

   
};

int main()
{
  
    ArrayX *aobj1= new ArrayX(5);

    cout<<aobj1->iSize;

    delete aobj1;

    

    return 0;
}