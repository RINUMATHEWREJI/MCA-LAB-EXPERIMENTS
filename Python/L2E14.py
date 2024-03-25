word = input("enter the word : ")
if word.endswith('ing'):
    newstring = word + 'ly'
else:
    newstring = word + 'ing'
print(f"the new string is : {newstring}")
