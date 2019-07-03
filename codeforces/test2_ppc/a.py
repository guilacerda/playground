qtd = input()
qtd = int(qtd)

a = input()

b = input()
b = int(b)
e = 0
f = 0
for i in range(0, b):
    c = input()
    e += 1
    for x in a:
        if x.lower() in c.lower():
            f = 1

    if f == 1:
        print("Mensagem #" + str(e) + ": Carlos")
    else:
        print("Mensagem #" + str(e) + ": Beto ou Carlos")

    f = 0
