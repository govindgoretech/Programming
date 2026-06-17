#include<iostream>
using namespace std;

class ArrayX
{
   public:
       int *Arr;
       int iSize;

       ArrayX(int X)
       {

       }
   
};

int main()
{
    ArrayX aobj(5); 

    cout<<sizeof(aobj);  

    return 0;
}