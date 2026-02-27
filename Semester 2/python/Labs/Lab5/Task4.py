text = input("Enter a string: ").lower()  # Take input from the user and convert it to lowercase

vowel_count = {}   # Create an empty dictionary to store the count of each vowel
vowels = "aeiou"   

for ch in text:   # Iterate through each character in the input string
    if ch in vowels:      # Check if the character is a vowel
        if ch in vowel_count:     # If the vowel is already in the dictionary, increment its count
            vowel_count[ch] += 1
        else:
            vowel_count[ch] = 1    # If the vowel is not in the dictionary, add it with a count of 1

print(vowel_count)