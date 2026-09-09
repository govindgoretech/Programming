CheckEven = lambda No : (No % 2 == 0)

def main():
    Value = int(input("Enter number : "))

    Ret = CheckEven(Value)  # Ret = (Value % 2 == 0)
    
    if(Ret == True):
        print("Its Even number")
    else:
        print("Its Odd number")

if __name__ == "__main__":
    main()