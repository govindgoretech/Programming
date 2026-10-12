class Demo:
    # Class variables
    Value1 = 10
    Value2 = 20

    def __init__(self):
        self.No1 = 11
        self.No2 = 21

    # Instance method
    def fun(self):
        print("Inside instance method named as fun")
        print(self.No1)
        print(self.No2)
        print(Demo.Value1)
        print(Demo.Value2)

    @classmethod
    def gun(cls):
        print("Inside class method named as gun")
        #print(Demo.No1)    Not allowed
        #print(Demo.No2)    Not allowed
        print(Demo.Value1)
        print(Demo.Value2) 

# Call without object
Demo.gun()