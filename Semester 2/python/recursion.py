# def show(n):
#     if(n==0):
#         return
#     print(n)
#     show(n-1)
    
    
# number = 5
# show(number)

def fact(n):
    if(n==1 or n==0):
        return 1
    return n*fact(n-1)

print(fact(5))