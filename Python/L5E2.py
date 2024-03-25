import time
import datetime
print(f"current date and time : {datetime.datetime.now()}")
print(f"current year : {datetime.date.today().strftime("%Y")}")
print(f"month of year : {datetime.date.today().strftime("%B")}")
print(f"week number of year : {datetime.date.today().strftime("%W")}")
print(f"day of year : {datetime.date.today().strftime("%j")}")
print(f"day of month : {datetime.date.today().strftime("%d")}")
print(f"day of week : {datetime.date.today().strftime("%w")}")
print(f"day of week : {datetime.date.today().strftime("%A")}")
