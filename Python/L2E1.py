num1 = float(input("enter the first number : "))
num2 = float(input("enter the second number : "))
num3 = float(input("enter the third number : "))
if(num1 > num2 and num1 > num3):
    print(f"{num1} is greater")
elif(num2 > num1 and num2 > num3):
    print(f"{num2} is greater")
else:
    print(f"{num3} is greater")