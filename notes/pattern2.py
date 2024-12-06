n = 5
m = 1
for i in range(0,n):
    for j in range(0,n-i-1):
        print(end=" ")
    for j in range(0,i+1):
        print(j+1,end="")
    for j in range(i,0,-1):
        print(j,end="")
    print()