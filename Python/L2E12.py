integers = input("enter the list of numbers : ")
numbers = [int(i) for i in integers.split(",")]
oddnumber = [i for i in numbers if i%2!=0]
print(oddnumber)