marks = int(input("Enter obtained marks : "))

if(marks>=90 and marks<=100):
    grade = 'A'
    print("Your grade = " , grade)
    
elif(marks<90 and marks>=80):
    grade = 'B'
    print("Your grade = " , grade)
    
elif(marks<80 and marks>=70):
    grade = 'C'
    print("Your grade = " , grade)
    
elif(marks<70):
    grade = 'D'
    print("Your grade = " , grade)

else:
    print("Inavlid marks!!!")
    
    
    