words = input("enter the words(seperated by commas) : ")
word = words.split(",")
longest_name = {}
longest_word = 0
for i in word:
    wordlength = len(i)
    if wordlength > longest_word:
        longest_word = wordlength
    if len(i) > len(longest_name):
        longest_name = i
print(f"the longest word is {longest_name}")
print(f"the length of longest word is {longest_word}")