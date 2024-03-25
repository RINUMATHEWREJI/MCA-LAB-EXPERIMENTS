n = int(input("enter the number to find armstrong number : "))
num = n
order = len(str(n))
if n <= 0:
    print("enter number greater than 0")
else:
    sum = 0
    while num > 0:
        digit = num % 10
        sum += digit ** order
        num //= 10
if(sum == n):
    print(f"{n} is an armstrong number")
else:
    print(f"{n} is an not an armstrong number")
