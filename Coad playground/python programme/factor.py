def print_factore(x):
    print(f"factor of {x} is")
    for i in range(1,x+1):
     if x%i==0:
        print(i)
num=int(input("enter a number"))
print_factore(num)