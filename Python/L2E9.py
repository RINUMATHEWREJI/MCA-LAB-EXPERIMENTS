string1 = input("enter the first word : ")
string2 = input("enter the second word : ")
new_string1 = string1[0:1] + string2[1:2] + string1[2:]
new_string2 = string2[0:1] + string1[1:2] + string2[2:]
string3 = new_string1+" "+new_string2
print(string3)