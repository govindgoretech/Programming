def Even(Value):
    
    for iCnt in range(1,Value+1):
        if(iCnt%2==1):
            print(iCnt)

def main():
    print("Enter The Number: ")
    No= int (input())

    Even(No)
   


if __name__=="__main__":
    main()