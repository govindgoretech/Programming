def Division(No1,No2):
    Ans= No1/No2
    return Ans

def main():
    print("Enter The First Number: ")
    iValue1=int (input())

    print ("Enter the Second Number: ")
    iValue2= int (input())

    Ret=Division(iValue1, iValue2)
    print("Division Is: ",Ret)



if __name__=="__main__":
    main()