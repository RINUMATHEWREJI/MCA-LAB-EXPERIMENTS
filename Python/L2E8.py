word = input("enter the word : ")
fchar = word[0]
str = word.replace(fchar,'$')
modified_string = fchar + str[1:]
print(modified_string)