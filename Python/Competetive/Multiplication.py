def Multiplcation(No1,No2):
    Ans=No1*No2
    return Ans

def main():
    print("Enter the Second Number: ")
    iValue1=int (input())
    iValue2= int (input())

    Ret=Multiplcation(iValue1,iValue2)
    print("Multiplication Is: ",Ret)

if __name__=="__main__":
    main()
