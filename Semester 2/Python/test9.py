f = open("practice.txt" , "r")

data = f.read()
new_data = data.replace("Java" , "Python")

print(new_data)

f = open("practice.txt" , "w")

f.write(new_data)
word = "learning"
if (data.find(word) != -1):
    print("founded")
else:
    print("not founded")
    
    
data = True
line_no = 1
while data:
    data = f.readline()
    if(word in data):
        print(line_no)
    line_no+=1
    
    
