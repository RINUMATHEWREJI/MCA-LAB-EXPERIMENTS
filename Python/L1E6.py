num1 = float(input("enter the first number : "))
num2 = float(input("enter the second number : "))
add = num1 + num2
print(f"the sum of num1 and num2 is {add}")
sub = num1 - num2
print(f"the subtraction of num1 and num2 is {sub}")
mul = num1 * num2
print(f"the multiplication of num1 and num2 is {mul}")
if(num2 != 0):
    div = num1 / num2
    print(f"the divsion of num1 and num2 is {div}")
else:
    print("division by zero is not possible")
mod = num1 % num2
print(f"the modulus of num1 and num2 is {mod}")