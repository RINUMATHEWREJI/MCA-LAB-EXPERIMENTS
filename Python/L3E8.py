n = input("enter the number : ")
try:
    num = int(n)
    if(num <= 0):
        print("enter a number greater than 0")
    else:
        print(f"original number : {num}")
        reversed_number = 0
        while num > 0:
            digit = num % 10
            reversed_number = reversed_number * 10 + digit
            num //= 10
        print(f"reversed number : {reversed_number}")
except ValueError:
    print("invald input enter valid integer")