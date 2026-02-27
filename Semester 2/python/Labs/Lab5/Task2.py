text = input("Enter a sentence: ").lower()   #  input from user and convert to lowercase for uniformity

word_count = {}   #create an empty dictionary 
words = text.split()  # split the input text into words

for word in words:  # iterate through each word in the list of words 
    if word in word_count:   # if the word is already in the dictionary, increment its count
        word_count[word] += 1
    else:     
        word_count[word] = 1   # if the word is not in the dictionary, add it with a count of 1

print(word_count)  # print the dictionary containing each word and its count