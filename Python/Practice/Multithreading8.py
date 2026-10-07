import time
import threading

def SumEven(No):
    Sum = 0

    for i in range(2,No,2):
        Sum = Sum + i

    print("Summation of even : ",Sum)

def SumOdd(No):
    Sum = 0

    for i in range(1,No,2):
        Sum = Sum + i

    print("Summation of odd : ",Sum)

def main():

    start_time = time.perf_counter()

    t1 = threading.Thread(target=SumEven, args=(100000000,))
    t2 = threading.Thread(target=SumOdd, args=(100000000,))

    t1.start()
    t2.start()
    
    t1.join()
    t2.join()
    
    end_time = time.perf_counter()

    print(f"Time required is : {end_time - start_time:.4f}")

if __name__ == "__main__":
    main()