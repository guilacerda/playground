file = open("cardapio.txt", 'r')

stringzona = ""
line = ""
foods = []

for line in file:
    if line[len(line)-1] == '\n':
        line = line[:len(line)-1] + " "

    stringzona = stringzona + line

words = stringzona.split(" ")

for word in words:
    if word != '':
        foods.append(word)

id_desjejum = foods.index("DESJEJUM") + 8
id_almoco = foods.index("ALMOÇO") + 8
id_jantar = foods.index("JANTAR") + 8
id_end = foods.index("Legenda:")

menu = {}

menu["DESJEJUM"] = {
    "Bebidas quentes": [],
    "Vegetariano 1": [],
    "Vegetariano 2": [],
    "Vegetariano 3": [],
    "Achocolatado": [],
    "Pão": [],
    "Complemento 1": [],
    "Complemento 2": [],
    "Comp. Vegetariano": [],
    "Fruta": []
}
menu["ALMOÇO"] = {
    "Salada:": [],
    "Molho:": [],
    "Prato Principal:": [],
    "Guarnição:": [],
    "Prato Vegetariano:": [],
    "Acompanhamentos:": [],
    "Sobremesa:": [],
    "Refresco:": []
}
menu["JANTAR"] = {
    "Salada:": [],
    "Molho:": [],
    "Sopa:": [],
    "Pão:": [],
    "Prato Principal:": [],
    "Prato Vegetariano:": [],
    "Acompanhamentos:": [],
    "Sobremesa:": [],
    "Refresco:": []
}

keys_desjejum = ["Bebidas", "Vegetariano", "Achocolatado", "Pão", "Complemento",
                 "Comp.", "Fruta"]

keys_almoco = ["Salada:", "Molho:", "Principal:", "Guarnição:",
               "Vegetariano:", "Acompanhamentos:", "Sobremesa:", "Refresco:"]

keys_jantar = ["Salada:", "Molho:", "Principal:", "Sopa:", "Pão:",
               "Vegetariano:", "Acompanhamentos:", "Sobremesa:", "Refresco:"]

key = ""
counter_v = 1
counter_pao = 1
counter_achocolatado = 1
counter_c = 1
it = iter(range(id_desjejum, id_almoco-8))

for x in it:
    if foods[x] in keys_desjejum:
        if foods[x] == "Bebidas" or foods[x] == "Comp.":
            key = foods[x] + " " + foods[x+1]
            x = next(it)
        elif foods[x] == "Vegetariano":
            key = foods[x] + " " + str(counter_v)
            counter_v = counter_v + 1
        elif foods[x] == "Complemento":
            key = foods[x] + " " + str(counter_c)
            counter_c = counter_c + 1
        elif foods[x] == "Pão":
            if counter_pao == 1:
                key = foods[x]
                counter_pao = counter_pao - 1
            else:
                menu["DESJEJUM"][key].append(foods[x])
        elif foods[x] == "Achocolatado":
            if counter_achocolatado == 1:
                key = foods[x]
                counter_achocolatado = counter_achocolatado - 1
            else:
                menu["DESJEJUM"][key].append(foods[x])
        else:
            key = foods[x]
    else:
        menu["DESJEJUM"][key].append(foods[x])

it = iter(range(id_almoco, id_jantar-8))
for x in it:
    if foods[x] in keys_almoco:
        if foods[x] == "Principal:" or foods[x] == "Vegetariano:":
            key = foods[x-1] + " " + foods[x]
        else:
            key = foods[x]
    else:
        if foods[x] != "Prato":
            menu["ALMOÇO"][key].append(foods[x])

it = iter(range(id_jantar, id_end-1))
for x in it:
    if foods[x] in keys_jantar:
        if foods[x] == "Principal:" or foods[x] == "Vegetariano:":
            key = foods[x-1] + " " + foods[x]
        else:
            key = foods[x]
    else:
        if foods[x] != "Prato":
            menu["JANTAR"][key].append(foods[x])

menu_days = {
    "Segunda-feira": {
        "DESJEJUM": {},
        "ALMOÇO": {},
        "JANTAR": {}
    },
    "Terça-feira": {
        "DESJEJUM": {},
        "ALMOÇO": {},
        "JANTAR": {}
    },
    "Quarta-feira": {
        "DESJEJUM": {},
        "ALMOÇO": {},
        "JANTAR": {}
    },
    "Quinta-feira": {
        "DESJEJUM": {},
        "ALMOÇO": {},
        "JANTAR": {}
    },
    "Sexta-feira": {
        "DESJEJUM": {},
        "ALMOÇO": {},
        "JANTAR": {}
    },
    "Sábado": {
        "DESJEJUM": {},
        "ALMOÇO": {},
        "JANTAR": {}
    },
    "Domingo": {
        "DESJEJUM": {},
        "ALMOÇO": {},
        "JANTAR": {}
    }
}

days_counter = 0
is_title = []
_is_title = {}

for element in menu["DESJEJUM"].keys():
    for i in range(0, len(menu["DESJEJUM"][element])):
        if menu["DESJEJUM"][element][i-1] != '/' \
           and menu["DESJEJUM"][element][i].istitle() \
           and menu["DESJEJUM"][element][i][0] != '/' \
           and menu["DESJEJUM"][element][i-1] != 'e':
            is_title.append(i)

    _is_title[element] = is_title
    is_title = []
