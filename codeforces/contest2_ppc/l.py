a = input()
a = int(a)

for i in range(0, a):
    word = input()

    if len(word) > 10:
        print(word[0] + str((len(word)-2)) + word[-1:])
    else:
        print(word)
