n = int(input())

x = [int(x) for x in input().split()]
x.reverse()
for j in range(n):
    print(x[j], end=" ")