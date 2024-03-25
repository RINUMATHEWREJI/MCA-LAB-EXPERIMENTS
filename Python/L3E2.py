n = int(input("enter the no of terms in fibonacci deries : "))
if n == 0:
    print(f"fibonacci of {n} is {n}")
elif n == 1:
    print(f"fibonacci of {n} is {n}")
else:
    a = 0
    b = 1
    if n<0:
        print("enter a positive number")
    else:
        print("the fibonacci sequence are : ")
        print(a)
        print(b)
        for i in range(2,n):
            c = a + b
            a = b
            b = c
            print(c)

