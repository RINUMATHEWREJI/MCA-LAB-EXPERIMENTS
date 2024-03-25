class invalidNameError(Exception):
    pass
class invalidAgeError(Exception):
    pass
def validate(name,age):
    try:
        if not name.isalpha():
            raise invalidNameError("name should be alphabets only")
        age = int(age)
        if age < 18:
            raise invalidAgeError("age should be greater than 18")
        else:
            print(f"congratulations ! {name} you are eligible to vote")

    except invalidNameError as e:
        print(f"invalid name : {e}")
    except invalidAgeError as e:
        print(f"invalid age : {e}")
    except ValueError:
        print("invalid age input . please enter a valid age")

name = input("enter the name : ")
age = input("enter the age : ")
validate(name,age)