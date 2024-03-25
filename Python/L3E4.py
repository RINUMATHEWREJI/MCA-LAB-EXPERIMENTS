starting_range = int(input("enter the starting number : "))
ending_range = int(input("enter the ending number : "))
if(starting_range < 1000 or ending_range > 9999):
    print("number must between 1000 and 9999")
else:
    list = []
    for i in range(starting_range,ending_range):
        sqrt = i ** 0.5
        if sqrt  == int(sqrt):
            if all(int(digit)% 2 == 0 for digit in str(i)):
                list.append(i)
    print(list)