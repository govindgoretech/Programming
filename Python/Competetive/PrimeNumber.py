def prime(Value):
    
    for iCnt in range(2,Value):
        if(Value%iCnt==0):
            return True
            break
        else:
            return False

def main():
    print("Enter The Number: ")
    No= int (input())

    bRet=prime(No)
    if(bRet==True):
        print(No," Not A Prime Number")

    else:
        print(No," is A Prime Number")
   


if __name__=="__main__":
    main()