f = open("data.txt" , "r")


line1 = f.readline()   #to read line1
print(line1)

data = f.read()   #to read the entire data
print(data)
f.close()


write = open("data.txt" , "a")
write.write("I want to become an AI engineer")

with open("data.txt" , "r") as r:
    line1 =  r.readline()
    print(line1)
    
