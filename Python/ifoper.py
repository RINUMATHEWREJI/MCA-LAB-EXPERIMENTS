name = input("enter the name : ")
length = len(name)
if length < 3:
    print("name atleast be 3 characters")
elif length > 50:
    print("name has maximum 50 characters")
else:
    print("name looks good")