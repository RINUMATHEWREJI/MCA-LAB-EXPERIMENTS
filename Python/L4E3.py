def compare(s1,s2,n):
    substring1 = s1[0:n+1]
    substring2 = s2[0:n+1]
    if substring1 == substring2:
        return True
    else:
        return False
s1 = input("enter the string1 : ")
s2 = input("enter the string2 : ")
n = int(input("how many first character to test : "))
if n > len(s1) or n >len(s2):
    print("number is exceeding the characters")
else:
    result = compare(s1,s2,n)
    print(result)