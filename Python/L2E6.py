list1 = input("enter the numbers(seperated by comma) : ")
list2 = input("enter the numbers(seperated by comma) : ")
number1 = [int(i) for i in list1.split(",")]
number2 = [int(i) for i in list2.split(",")]
sum1 = 0
sum2 = 0
if(len(number1) == len(number2)):
    print(f"list1:{len(number1)} and list2:{len(number2)} has same length")
else:
    print(f"list1:{len(number1)} and list2:{len(number2)} has different length")
for i in number1:
    sum1 += i
for i in number2:
    sum2 +=i
print(f"sum of list1 = {sum1} ,sum of list2 = {sum2}")
if(sum1 == sum2):
    print("both list sum to same value")
else:
    print("both list sum to different value")
common = [i for i in number1 if i in number2]
if common:
     print(f"both list has common elemnts : {common}")
else:
     print("both list donot have common elements")