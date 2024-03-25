def add(*args):
    if not args:
        return 0
    sum1 = 0
    for i in args:
        sum1 += i
    return sum1

n = input("enter the numbers : ")
n1 = [int(i) for i in n.split(",")]
sum = add(*n1)
print(f"sum of {n1} is {sum}")    