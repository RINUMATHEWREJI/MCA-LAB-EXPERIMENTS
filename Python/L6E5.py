class Time:
    def __init__(self,hours = 0,minutes = 0,seconds = 0):
        self.hours = hours
        self.minutes = minutes
        self.seconds = seconds
    def __add__(self,othertime):
        totalseconds = self.hours * 3600 + self.minutes * 60 + self.seconds
        totalseconds += othertime.hours * 3600 + othertime.minutes * 60 + othertime.seconds
        hours = totalseconds // 3600
        totalseconds %= 3600
        minutes = totalseconds // 60
        seconds = totalseconds % 60
        return Time(hours,minutes,seconds)
    def display(self):
        print(f"time {self.hours:}:{self.minutes:}:{self.seconds:}")

hour1 = int(input("enter the hour1 : "))
minutes1 = int(input("enter the minutes1 : "))
second1 = int(input("enter the second1 : "))
hour2 = int(input("enter the hour2 : "))
minutes2 = int(input("enter the minutes2 : "))
second2 = int(input("enter the second2 : "))
time1 = Time(hour1,minutes1,second1)
time2 = Time(hour2,minutes2,second2)
sum_time = time1 + time2
sum_time.display()