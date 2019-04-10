a = input()
a = a.split("+")
a = sorted(a)
b = ''
for i in range(0, len(a)):
    if i == 0:
        b = b + a[i]
    else:
        b = b + "+" + a[i]

print(b)
