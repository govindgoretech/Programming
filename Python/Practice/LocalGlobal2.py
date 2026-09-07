no = 11     # Global variable

def Display():
    a = 21  # Local variable
    print("From display : ",no)
    print("From display value of a is : ",a)

def Demo():
    print("From demo value of a is : ",a)
    print("From demo : ",no)

Display()
Demo()