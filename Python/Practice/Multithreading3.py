import threading

def Display(No):    # def Display(*No)
    print(f"Inside Display {No} : ",threading.get_ident())

def main():
    print("Inside main : ",threading.get_ident())   # 11

    tobj = threading.Thread(target=Display, args=(11,))

    tobj.start()

if __name__ == "__main__":
    main()