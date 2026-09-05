#include<iostream>
using namespace std;

class ArrayX
{
   public:
       int *Arr;
       int iSize;
     //Parameterized Constructor
       ArrayX(int X)
       {
        cout<<"Inside Constructor";
        iSize=X;                 //Charteristic initialization
        Arr = new int[iSize];    //Resource Aloocation

       }
       //Destructor
       ~ArrayX()
       {
        cout<<"Inside Destructor";
         delete []Arr;
       }

   
};

int main()
{
    ArrayX aobj(5); 

    return 0;
}