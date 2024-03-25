from armstrong import armstrong_number
num = int(input("enter the number to check armstrong or not : "))
if(armstrong_number(num)):
    print(f"{num} is armstrong number")
else:
    print(f"{num} is not armstrong number")