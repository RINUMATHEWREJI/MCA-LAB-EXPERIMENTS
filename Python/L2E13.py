string = input("enter the string : ")
store = {}
for i in string:
    if i in store:
        store[i] += 1
    else:
        store[i] = 1
print(store)
print(f"total count = {len(string)}")