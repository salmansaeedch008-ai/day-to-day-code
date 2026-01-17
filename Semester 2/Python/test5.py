movie1 = input("enter the name of movie 1 : ")
movie2 = input("enter the name of movie 2 : ")
movie3 = input("enter the name of movie 3 : ")

movies = []
movies.append(movie1)
movies.append(movie2)
movies.append(movie3)
print(movies)
    

list = [1 , 2 , 3 , 2 , 1 ]

list2 = list.copy()
list2.reverse()

if (list==list2):
    print("list is palindrome")
else:
    print("list is not palindrome")
    
    
grades = ("C" , "D" , "A" , "A" , "B" , "B" , "A")

print(grades.count("A"))

grades2 = ["C" , "D" , "A" , "A" , "B" , "B" , "A"]

grades2.sort()
print(grades2)