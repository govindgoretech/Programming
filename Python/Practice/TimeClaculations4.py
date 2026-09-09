import time

def Factorial(No):
    Fact = 1

    for i in range(1,No+1):
        Fact = Fact * i

    return Fact

def main():
    Value = int(input("Enter number : "))

    start_time = time.time()

    Ret = Factorial(Value)

    end_time = time.time()

    print(f"Factorial of {Value} is {Ret}")

    print(f"Time requred is : {end_time-start_time:.5f} seconds")
    
if __name__ == "__main__":
    main()