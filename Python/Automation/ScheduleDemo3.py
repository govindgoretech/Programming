import schedule
import time
import datetime

def Display():
    print("Jay Ganesh...",datetime.datetime.now())

def main():
    print("Autmation Script started")

    schedule.every(1).minute.do(Display)

    while True:
        schedule.run_pending()
        time.sleep(1)
    
    print("End of automation script")

if __name__ == "__main__":
    main()