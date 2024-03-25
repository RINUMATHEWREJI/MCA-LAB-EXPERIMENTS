power = lambda n:list(map(lambda x: 2**x,range(n)))
num = int(input('how many terms : '))
result = power(num)
print(result)
