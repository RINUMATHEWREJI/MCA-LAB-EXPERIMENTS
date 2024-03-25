def simpleinterest(p,t,age):
    if age>=60:
        return (p*t*12)/100
    else:
        return (p*t*10)/100
p = int(input("enter the principala mount : "))
t = int(input("enter the time period in months : "))
age = int(input("enter the age of customer : "))
si = simpleinterest(p,t,age)
print(f"the simple interest is {si}")
print(f"the total balance is {si+p}")
