def add(n):
    if(n==1):
        return 1
    return n+add(n-1)

print(add(10))



def print_list(list , index=0):
    if(index==len(list)):
        return
    print(list(index))
    print_list(list , index+1)
    
list = [1 ,2 , 3, 4, 5, 6]

print(list)

