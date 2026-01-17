info = {   #dictionary 
    "name" : "salman saeed",
    "cgpa" : 3.2,             #store all data types and data structures
    "marks" : [95 , 97 , 85 , 48],
}   

print(info)
print(type(info))
     
print(info["name"])  #to access the value
print(info["cgpa"])
print(info["marks"])

info["cgpa"] = 3.5
print(info)

null_dict = {       #null dictionary
    
}


null_dict["name"] = "hassan ali"

print(null_dict)



student = {         #nested dictionary 
    "name" : "salman saeed",
    "score" : {
        "chem" : 98, 
        "phy" : 97,
        "math" : 95,
    }
}

print(student)  #prints all
print(student["score"])  #print second(nested)
 
print(student["score"]["phy"])  #to acess a particular value

print(student.keys())  #return all keys

list(student.keys())   #to store keys in a list


print(student.values())   #return the values
list(student.values()) #creates a list of values

print(student.items()) #returns all pairs as tuples

print(student.get("name")) #returns the value of the key

# print(student("name2"))  #returns error (upper line if written name 2 returns none)



student.update({"city" : "mailsi"})

print(student)