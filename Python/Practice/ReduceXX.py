from functools import reduce

CheckEven = lambda No : (No % 2 == 0)
Increment = lambda No : No+1
Addition = lambda No1, No2 : No1 + No2

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is : ",Data)

    FData = list(filter(CheckEven,Data))

    print("Data after filter : ",FData)

    MData = list(map(Increment, FData))

    print("Data after map : ",MData)
    
    RData = reduce(Addition,MData)

    print("Data after reduce : ",RData)

if __name__ == "__main__":
    main()