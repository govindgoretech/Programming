#include<iostream>
using namespace std;

class ArrayX
{
   public:
       int *Arr;
       int iSize;
       ///  Default ConStructo
       ArrayX()
       {

       }
     //Parameterized Constructor
       ArrayX(int X)
       {

       }
   
};

int main()
{
    ArrayX aobj; 
    ArrayX aobj2(5);

    cout<<sizeof(aobj);  

    return 0;
}