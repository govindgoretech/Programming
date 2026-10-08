import multiprocessing
import os
import time

def SumCube(No):
    print("Process is running with PID : ",os.getpid())
    
    Sum = 0

    for i in range(1,No+1):
        Sum = Sum + (i ** 3)

    return Sum

def main():
    Data = [10000000, 20000000, 30000000, 40000000, 50000000]
    Result = []

    start_time = time.perf_counter()

    pobj = multiprocessing.Pool() 

    Result = pobj.map(SumCube,Data)

    pobj.close()
    pobj.join()
    
    end_time = time.perf_counter()

    print("Result is : ")
    print(Result)

    print(f"Time required : {end_time-start_time:.4f} seconds")

if __name__ == "__main__":
    main()