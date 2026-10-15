def main():
    try:
        fobj = open("Demo.txt","w")
        print("File gets opened")

        fobj.write("Jay Ganesh...")
        
        fobj.close()

    except FileNotFoundError as fobj:
        print("File is not present in current directory")
        
if __name__ == "__main__":
    main()