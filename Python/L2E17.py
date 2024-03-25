n = int(input("enter the number of items in dictionary : "))
dict = {}
for i in range(n):
    key = input("enter key : ")
    value = input("enter value : ")
    dict[key] = value
print(f"the dictionary is {dict}")
dict_asc = (sorted(dict.items(),key = lambda item : item[0]))
dict_des = (sorted(dict.items(),key = lambda item : item[0] , reverse = True))
print(f"ascending order of key: {dict_asc}")
print(f"descending order of key: {dict_des}")