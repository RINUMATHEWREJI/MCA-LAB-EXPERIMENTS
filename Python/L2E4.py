numbers = input("enter the numbers(seperated by spaces) : ")
number = [int(i) for i in numbers.split(" ")]
result = ["over" if i > 100 else i for i in number]
print(result)
