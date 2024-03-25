def factorial(num):
    if num == 0 or num == 1:
        return 1
    else:
        return num * factorial(num-1)
def factseries(n):
    sum = 0
    for i in range(1,n+1):
        term = i ** i / factorial(i)
        sum = sum + term
    return sum
n = int(input("enter the number of terms  : "))
result = factseries(n)
print(result)
