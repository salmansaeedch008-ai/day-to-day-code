marks = [23 , 33 , 32 , 54 , 67]    #list(mutable)

print(marks)
print(type(marks))
print(len(marks))

marks.append(45)  #add at the end
print(marks)

marks.sort()  #sort array in ascending order
print(marks)                                                           
 
marks.sort(reverse=True) #sort array in descending order
print(marks)

marks.reverse()  #reverse an array
print(marks)

marks.insert(2, 89)  #add value at particular index
print(marks)

marks.remove(23)  #remove element at first occuring
print(marks)

marks.pop(4) #removes value at particular index
print(marks)

ages = (23 , 33 , 32 , 54 , 67 , 33)  #tuples(immutable)

print(ages.index(54)) #returns the index of the element at its first occurance

print(ages.count(33))  #returns how many times the element found in tuples