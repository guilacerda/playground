a = input()
countA = 0

for x in a:
    if x == 'a':
        countA = countA + 1

if countA > (len(a)-countA):
    print(len(a))
else:
    print(len(a) - ((len(a)-countA) - countA + 1))
