text = input("enter the text : ")
word = text.split(" ")
store = { }
for i in word:
    if i in store:
        store[i] += 1
    else:
        store[i] = 1
print(store)
