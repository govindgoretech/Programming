def main():
    try:
        open("Demo.txt","w")
        print("File gets opened")

    except FileNotFoundError as fobj:
        print("File is not present in current directory")
        
if __name__ == "__main__":
    main()