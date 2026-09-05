def CountNumber(Value):

    iCount=0
    while(Value!=0):
        
        No=Value%10
        iCount=iCount+1
        Value=Value//10

    return iCount
        

        

def main():
    print("Enter The Number: ")
    No= int (input())

    iRet=CountNumber(No)
    print("Total Numbers Are:",iRet)
    
   


if __name__=="__main__":
    main()