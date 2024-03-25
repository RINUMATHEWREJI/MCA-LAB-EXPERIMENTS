basic_pay = float(input("enter the basic pay of an employee : "))
HRA = 0.10 * basic_pay
TA = 0.05 * basic_pay
salary = basic_pay+HRA+TA
print(f"salary of an employee is {salary}")