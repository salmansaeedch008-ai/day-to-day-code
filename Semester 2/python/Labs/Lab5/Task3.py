emails = ["user1@gmail.com", "admin@company.org"]   # List of email addresses

email_dict = {}   # Dictionary to store username and domain pairs

for email in emails:    # Iterate through each email address
    parts = email.split("@")   # Split the email address into username and domain using "@" 
    username = parts[0]    #    Extract the username (the part before "@")
    domain = parts[1]   # Extract the domain (the part after "@")
    email_dict[username] = domain   # Add the username and domain to the dictionary, with the username as the key and the domain as the value
    
print(email_dict)