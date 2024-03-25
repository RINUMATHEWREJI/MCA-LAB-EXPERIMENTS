def number(num):
    try:
        num = int(num)
        if num >= 0:
            print(f"the entered number is {num}")
        else:
            raise ValueError(f"the enteered number is negative : {num}")
    except ValueError as e:
        print(f"invalid input : {e}")
num = input("enter the number : ")
number(num)