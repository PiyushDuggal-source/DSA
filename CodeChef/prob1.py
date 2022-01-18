x = int(input())
y = float(input())

if (y < 0):
    exit()
elif (x > y or x % 5 != 0):
    print(y)
else:
    z = x + 0.5

    print(y - z)
