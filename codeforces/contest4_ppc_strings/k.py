a = input()
a = a.split(" ")
a = [int(a[0]), int(a[1])]
b = 240 - a[1]
c = 0
for x in range(1, a[0]+1):
    b = b - 5*x
    c += 1

    if(b < 0):
        c -= 1
        break

print(c)
