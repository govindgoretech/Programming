def RevNumber(Value):

    Rev=0
    while(Value!=0):
        
        No=Value%10
        Rev=(Rev*10)+No
        Value=Value//10

    return Rev

        
def main():
    print("Enter The Number: ")
    No= int (input())

    iRet=RevNumber(No)
    print(iRet)
    

if __name__=="__main__":
    main()