i = 1

while i<=100:
    print(i)
    i+=1


j = 100
while j>=1 :
    print(j)
    j-=1


n = int(input("Enter a number : "))

k = 1
while k<=10:
    print(n, " x " , k , " = " , n*k)
    k+=1
    
list = [1 , 4 , 9 , 16 , 25 , 36 , 49 , 64, 81 , 100]

l = 1
while l<=9 :
    print(list[l])
    l+=1

tuple = (1 , 4 , 9 , 16 , 25 , 36 , 49 , 64, 81 , 100)
target = int(input("Enter the target from the list : "))
m = 0
while m<=9 :
    if(tuple[m] == target):
        print("target found at index : " , m)
        break
    else:
        print("finding........")
    m+=1

for num in list:
    print(num)
idx = 0
for val in tuple:
    if(val==target):
        print("founded at index : " , idx)
        break
    idx+=1
else:
    print("not founded")
        

        
for i in range(1, 101):
    print(i)

for k in range(100 , 0 , -1):
    print(k)

for j in range(1 , 11):
    print(n, " x " , j , " = " , n*j)
    
o = int(input("Enter a number : "))
y = 1
sum=0

while y<=o :
    sum+=y
    y+=1
print("Sum of numbers : " , sum)


q = int(input("Enter a number : ")) 
fact = 1
for i in range(q , 0 , -1):
    fact*=i
print("factorial of number : " , fact)
