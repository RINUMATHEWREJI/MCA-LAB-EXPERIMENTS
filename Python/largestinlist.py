numbers = input("enter the numbers(seperated by spaces) : ")
number = [int(i) for i in numbers.split(" ")]
largest_num = number[0]
for i in number:
    if(i>largest_num):
        largest_num=i
print(f"the largest number in list is {largest_num}")