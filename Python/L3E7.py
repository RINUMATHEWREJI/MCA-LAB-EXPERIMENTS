n = input("enter the number to find factors : ")
try:
    num = int(n)
    if num<=0:
        print("enter number greater than 0")
    else:
        print(f"the factors of number {num} are : ")
        for i in range(1,num+1):
            if num % i == 0:
                print(i)
except ValueError:
    print("invalid input")