string1 = input("enter a string : ")
string2 = string1[-1:] + string1[1:-1] + string1[0:1]
print(f"new string is {string2}")