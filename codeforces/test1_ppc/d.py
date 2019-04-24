a = input()
a = a.split(' ')

for i in range(0, len(a)):
    if(a[i] == '-'):
        pos = i

if pos == 0:
    a[1] = a[1].split(':')
    b = list(a[1])
    print(b[1])
    b = int(b[1])
