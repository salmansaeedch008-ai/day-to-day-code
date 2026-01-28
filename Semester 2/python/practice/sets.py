nums = {1 , 2 , 3 , 3 , 4}
#ignore duplicates and print randomly

print(nums)
print(type(nums))  

null_set  = {}  #null dictionary
print(type(null_set))

null_sets = set()

nums.add(6)         #add an element
print(nums)

nums.remove(6)         #removes the element
print(nums)

nums.clear()     #empties the set
print(nums) 

nums2 = {1 , 2 , 3 , 3 , 4}
nums2.pop()    #removes the random value
print(nums2)

print(nums2.union(nums))
print(nums2.intersection(nums))