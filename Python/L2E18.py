n1 = int(input("enter the number of items in dictionary : "))
dict1 = {}
for i in range(n1):
    key = input("enter key : ")
    value = input("enter value : ")
    dict1[key] = value
print(f"the dictionary is {dict1}")
n2 = int(input("enter the number of items in dictionary : "))
dict2 = {}
for i in range(n2):
    key = input("enter key : ")
    value = input("enter value : ")
    dict2[key] = value
print(f"the dictionary is {dict2}")
merge = dict1.copy()
merge.update(dict2)
dict_asc = (sorted(merge.items(),key = lambda item:item[0]))
print(f"the meged dictionary is : {dict_asc}")