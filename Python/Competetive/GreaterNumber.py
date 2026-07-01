def ChekGreater(Value1,Value2):
    if(Value1>Value2):
        return True
    
    
    return False


def main():
    print("Enter the Firest Number: ")
    No1=int (input())

    print("Enter The Second Number: ")
    No2=int (input())

    bRet=ChekGreater(No1,No2)
    if(bRet==True):
        print(No1,"Is Greater Number")

    else:
        print(No2,"Is Greater Number")


if __name__=="__main__":
    main()
    