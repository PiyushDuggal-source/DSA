arr = [0, 1]

n = 25

for i in range(2, n):
    arr.append(arr[i - 1] + arr[i - 2])

print(arr)
print(arr[n - 1])
