def Substraction(No1,No2):
    Ans=No1-No2
    return Ans

def main():
    print("Enter The First Number Is: ")
    iValue1=int (input())

    print("Enter the second Number: ")
    iValue2=int (input())

    Ret=Substraction(iValue1,iValue2)
    print("Substraction Is: ",Ret)

if __name__=="__main__":
    main()