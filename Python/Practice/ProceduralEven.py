def CheckEven(No):
    if(No % 2 == 0):
        print("Its Even number")
    else:
        print("Its Odd number")

def main():
    Value = int(input("Enter number : "))

    CheckEven(Value)
    
if __name__ == "__main__":
    main()