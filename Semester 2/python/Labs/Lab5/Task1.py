text = input("Enter a string: ")  #input string from user

char_count = {}              #creating an empty dictionary 

for ch in text:             #iterate through the string 
    if ch in char_count:                  #if a word repeats more than once in a string 
        char_count[ch] += 1
    else:                           #if only one time appers 
        char_count[ch] = 1


print(char_count)           #printing the dictionary 