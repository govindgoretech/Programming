#include<iostream>
using namespace std;

class ArrayX
{
    //Acess Specifer is Suumation is Private
    int Summation(int Arr[],int iSize)          //Error
{
    int iCnt=0, iSum=0;
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum=Arr[iCnt]+iSum;
    }

    return iSum;
}

};

int main()
{
    int *Brr= NULL;
    int iLength=0, iCnt=0, iRet=0;
    ArrayX aobj;

    cout<<"Enter the Number Elements\n";
    cin>>iLength;


    Brr = new int[iLength];

    cout<<"Enter The Elements: \n";

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Element Of the Array";
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    iRet =aobj.Summation(Brr,iLength);

    cout<<"Summation is"<<iRet<<endl;
    
    delete []Brr;

    

    return 0;
}