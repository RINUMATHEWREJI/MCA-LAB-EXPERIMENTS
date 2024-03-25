class BankAccount:
    def __init__(self,name,account_number,account_type,balance):
        self.name = name
        self.account_number = account_number
        self.account_type = account_type
        self.balance = balance
    def deposit(self,amount):
        self.balance += amount
        print(f"deposited amount:{amount} , total balance:{self.balance}")
    def withdrawn(self,amount):
        if self.balance <= 0:
            print("account is empty cannot withdrawn")
        elif amount > self.balance:
            print("amount exceeded total balance")
        else:
            self.balance -= amount
            print(f"amount withdrawn : {amount} ,  total balance : {self.balance}")
    def display_details(self):
        print(f"account details\n name : {self.name}\n account number : {self.account_number}\n account type : {self.account_type}\n balance : {self.balance}")

name = input("enter the name : ")
account_number = int(input("enter the account number : "))
account_type = input("enter the account type : ")
balance = int(input("enter the amount : "))
account = BankAccount(name,account_number,account_type,balance)
while True:
    print("1.deposit")
    print("\n2.withdraw")
    print("\n3.display")
    print("\n4.quit")
    choice = input("enter the choice : ")
    if choice == "1":
        deposit1 = int(input("enter the amount to deposit : "))
        account.deposit(deposit1)
    elif choice == '2':
        withdraw1 = int(input("enter the amount to withdraw : "))
        account.withdrawn(withdraw1)
    elif choice == '3':
        account.display_details()
    elif choice == '4':
        break
    else:
        print("invalid choice")