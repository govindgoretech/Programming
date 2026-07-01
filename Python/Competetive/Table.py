def Table(Value):
   
    for no in range(1,11):
        print(Value*no)
def main():
    print("Enter The No: ")
    No=int (input())
    print("Table of the:",No)
    Table(No)


if __name__=="__main__":
    main()