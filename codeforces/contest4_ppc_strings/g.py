a = input()
a = int(a)

b = input()
set1 = set()
b.lower()

for x in b:
    set1.add(x.lower())

if len(set1) == 26:
    print("YES")
else:
    print("NO")
