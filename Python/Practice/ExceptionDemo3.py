def main():
    Ans = 0
    
    try:
        print("Enter first number : ")
        No1 = int(input())

        print("Enter second number : ")
        No2 = int(input())

        Ans = No1 / No2

        print("Division is succesful")

    except ZeroDivisionError as zobj:
        print("Exception occured due to secnod operand is zero : ",zobj)

    except ValueError as vobj:
        print("Exception occured due to invalid datatype : ",vobj)
        
    print("Result is : ",Ans)

if __name__ == "__main__":
    main()