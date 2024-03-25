def factorial(n):
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return n * factorial(n-1)
n = int(input("enter the number to find factorial: "))
if n < 0:
    print("enter positive number")
else:
    print(f"the factorial of {n} is {factorial(n)}")