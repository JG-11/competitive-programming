T = int(input())

vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

for i in range(T):
    phrase = str(input())

    res = list()

    noVowel = True

    for j in phrase:
        if j in vowels:
            res.append(j)
            noVowel = False
        elif j is " ":
            res.append(' ')

    if noVowel:
        print("No Vowel", end = "")
    else:
        for k in res:
            print(k, end = "")

    print()
