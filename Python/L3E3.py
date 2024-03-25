numbers = input("enter the numbers : ")
number = [float(i) for i in numbers.split(",")]
sum = 0
store = []
for i in number:
    sum += i
    store.append(i)
print(f"the sum of list {store} is {sum}")