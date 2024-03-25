n = int(input("enter the number for multiplication : "))
limit = int(input("enter the limit : "))
print("multiplcation table:")
for i in range(limit+1):
    mul = i * n
    print(f"{i}*{n}={mul}")