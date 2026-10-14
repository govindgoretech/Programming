class Demo:
    def __init__(self,A):
        self.No = A

    def __add__(self, other):
        return self.No + other.No
        
    def __sub__(self, other):
        return self.No - other.No

    def __mul__(self, other):
        return self.No * other.No

    def __truediv__(self, other):
        return self.No / other.No

obj1 = Demo(11)
obj2 = Demo(21)

print(obj1+obj2)    # obj1.__add__(obj2) -> __add__(obj1,obj2)
print(obj1-obj2)    # obj1.__sub__(obj2) -> __sub__(obj1,obj2)
print(obj1*obj2)    # obj1.__mul__(obj2) -> __mul__(obj1,obj2)
print(obj1/obj2)    # obj1.__truediv__(obj2) -> __truediv__(obj1,obj2)

