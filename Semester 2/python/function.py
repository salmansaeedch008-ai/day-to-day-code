def sum(a , b):
    s = a + b
    return s



a = int(input("Enter a number : "))
b = int(input("Enter a number : "))
print(sum(a, b))

def average(a, b, c):
    avr = (a+b+c)/3
    return avr

c = int(input("Enter a number : "))
d = int(input("Enter a number : "))
e = int(input("Enter a number : "))

print(average(c, d, e))

def len(list , count=0):
    for i in list:
        count+=1
        
    return count


list = [1 , 2 , 3 , 4 , 5 , 6]

print(len(list))
        
def pri_el(list):
    for i in list:
        print(i , end=" ")
        
        
print(pri_el(list))
print()

def fact(n , fact = 1):
    for i in range(n , 0 , -1):
        fact*=i
        
    return fact


number = int(input("Enter a number to calculate factorial : "))

print(fact(number))

def check(num):
    if(num%2==0):
        string = "EVEN"
    else:
        string = "ODD"
        
    return string

num = int(input("Enter a number : "))
print(check(num))
