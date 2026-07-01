def Square(value):
    Result=value*value*value
    return Result

def main():
    print("Enter the Number: ")
    No=int(input())

    iRet=Square(No)

    print("Cube of",No,"Is:",iRet)

if __name__=="__main__":
    main()
