import threading

def Display(No1, No2, No3):    
    print(f"Inside Display {No1}, {No2}, {No3} : ",threading.get_ident())

def main():
    print("Inside main : ",threading.get_ident())   # 11

    tobj = threading.Thread(target=Display, args=(11,21,51,))

    tobj.start()

if __name__ == "__main__":
    main()