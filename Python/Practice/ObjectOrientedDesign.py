class Arithematic:
    def __init__(self,A,B):
        self.No1 = A
        self.No2 = B

    def Addition(self):
        Ans = self.No1 + self.No2
        return Ans
    
    def Substraction(self):
        Ans = self.No1 - self.No2
        return Ans

print("Enter first number : ")
Value1 = int(input())

print("Enter second number : ")
Value2 = int(input())

Aobj = Arithematic(Value1,Value2)

Ret = Aobj.Addition()      
print("Addition is : ",Ret)

Ret = Aobj.Substraction()  
print("Substraction is : ",Ret)