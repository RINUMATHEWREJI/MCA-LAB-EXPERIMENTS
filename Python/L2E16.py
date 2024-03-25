integers = input("enter the numbers(seperated by spaces) : ")
number = [int(i) for i in integers.split(",")]
positivenumbers = [i for i in number if i>= 0]
print(f"the positive numbers in the list are : {positivenumbers}")
squares = [ num**2 for num in positivenumbers ]
print(f"the square of positive numbers are : {squares}")
word = input("enter the word : ")
word = word.lower()
vowels = [char for char in word if char in 'aeiou']
print(f"the vowels in the word is {vowels}")
word1 = input("enter the word : ")
ordinal = [ord(value) for value in word1]
print(ordinal)