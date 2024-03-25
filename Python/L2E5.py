names = input("enter the names(seperated by commas) : ")
named = names.split(",")
total_count = 0
for name in named:
    count = 0
    for i in range(len(name)):
        if(name[i] == 'a'):
            count += 1    
    total_count += count
    print(f"{name} : {count} occurance of a")
print(f'total occurance of a in list is {total_count}')