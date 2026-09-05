def Div3and5(Value):
    if(Value%3==0&Value%5==0):
        return True
    
    
    return False


def main():
    print("Enter the  Number: ")
    No=int (input())

   

    bRet=Div3and5(No)
    if(bRet==True):
        print(No,"Is Divisible By 3 And 5")

    else:
        print(No,"Is Not Divisible By 3 And 5")


if __name__=="__main__":
    main()
    