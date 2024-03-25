def fibonacci(n):
    if n <= 1:
        return n
    else:
        return(fibonacci(n-1) + fibonacci(n-2))
n = int(input("enter the number of terms : "))
if n <= 0:
    print("enter positive number")
else:
    print("fibonacci sequence are : ")
    for i in range(n):
         print(fibonacci(i))