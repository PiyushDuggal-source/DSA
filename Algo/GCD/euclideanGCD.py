def Euclidean(a, b):
    if b == 0:
        return a
    rem = a%b
    # remm = "{:.2f}".format(rem)
    # print(remm)
    return Euclidean(b, rem)


print("ans: ", Euclidean(3918848, 1653264))
