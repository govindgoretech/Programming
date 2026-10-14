from abc import ABC, abstractmethod

class Base(ABC):
    @abstractmethod
    def Addition(self,No1,No2):
        pass

class Derived(Base):
    def Addition(self,No1,No2):
        return No1+No2

dobj = Derived()
Ret = dobj.Addition(10,11) 

print("Addition is : ",Ret)