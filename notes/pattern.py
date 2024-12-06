n = 5
m = 1
for i in range(0,n):
    for j in range(0,n-i):
        print(end=" ")
    print(m*"*")
    m += 2