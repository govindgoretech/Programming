def SumNumber(Value):

    Sum=0
    while(Value!=0):
        
        No=Value%10
        Sum=No+Sum
        Value=Value//10

    return Sum
        

        

def main():
    print("Enter The Number: ")
    No= int (input())

    iRet=SumNumber(No)
    print("Sum Of All Numbers is:",iRet)
    
   


if __name__=="__main__":
    main()