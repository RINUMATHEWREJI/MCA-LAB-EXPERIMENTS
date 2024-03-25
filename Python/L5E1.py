import calendar
year = int(input("enter year : "))
leap_year = calendar.isleap(year)
if (leap_year):
    print(f"{year} is leap year")
else:
    print(f"{year} is not leap year")