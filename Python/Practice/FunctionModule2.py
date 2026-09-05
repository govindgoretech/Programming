import Marvellous as MI

def main():
    print("Enter First Number: ")
    Value1= int(input())

    print ("Enter Second Number")
    Value2 = int(input())

    Ret = MI.Addition(Value1,Value2)    

    print("Addition is : ",Ret)

if __name__=="__main__":
    main()

