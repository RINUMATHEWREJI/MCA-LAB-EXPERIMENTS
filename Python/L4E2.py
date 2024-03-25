def oddeven(num):
    if num == 0:
        print(f"{num} is neither even nor odd")
    elif num % 2 == 0:
        print(f"{num} is even")
    else:
        print(f"{num} is odd")
num = int(input("enter the number to check even or odd : "))
if num < 0:
        print("enter a positive number")
else:
     oddeven(num)
