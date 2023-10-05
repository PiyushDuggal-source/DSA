def isPalindrome(x):
    st = str(x)
    revStr = ''
    for i in range(len(st) -1, -1, -1):
        revStr += st[i]

    print(revStr)

    return revStr == st

print(isPalindrome(232))
