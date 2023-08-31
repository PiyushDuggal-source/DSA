vowels = ['a', 'e', 'i', 'o', 'u']

def checking(noOfChar, word):
        count = 0
        for i in word:
            if(count >= 4):
                print("NO")
                return
            if i not in vowels:
                count += 1
            else:
                count = 0
        print("YES")

noOfTestCases = int(input(""))

for i in range(0, noOfTestCases):
    noOfChar = int(input(""))
    word = input("")
    checking(noOfChar, word)

