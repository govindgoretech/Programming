def Table(Value):
    Ans=0
    for no in range(1,Value+1):
        Ans=no+Ans

    return Ans
def main():
    print("Enter The No: ")
    No=int (input())
    
    iRet=Table(No)
    print("Sum of all The Numbers:",iRet)



if __name__=="__main__":
    main()