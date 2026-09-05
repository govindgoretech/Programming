def Addition(No1,No2):
    Ans=No1+No2

    return Ans

def main():
    print("Enter The First Number: ")
    iValue1=int(input())

    print("Enter the SecondNumber: ")
    iValue2=int (input())

    Ret=Addition(iValue1,iValue2)
    print("Additon Is: ",Ret)



if __name__=="__main__":
    main()

