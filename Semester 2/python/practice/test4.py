number = int(input("Enter a number : "))

if(number%2==0):
    print(number , "is even")
else:
    print(number , "is odd")
    
num1 = int(input("Enter a number(1) : "))
num2 = int(input("Enter a number(2) : "))
num3 = int(input("Enter a number(3) : "))

if(num1>num2 and num1>num3):
    print(num1 , "is largest")
    
elif(num2>num1 and num2>num3):
    print(num2 , "is largest")
    
else:
    print(num3 , "is largest")
    

number4 = int(input("Enter a number : "))

if(number4 % 7 ==0):
    print(number4 , "is multiple of 7")
else:
    print(number4 , "is not multiple of 7")
