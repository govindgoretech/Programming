def Factorial(Value):
    Fact=1
    for iCnt in range(1,Value+1):
        Fact=iCnt*Fact

    return Fact

def main():
    print("Enter The Number: ")
    No= int (input())

    iRet=Factorial(No)
    print("Factorial is The:",iRet)


if __name__=="__main__":
    main()