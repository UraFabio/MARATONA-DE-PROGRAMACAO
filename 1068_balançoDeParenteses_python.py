for i in range(10000):
    cont1 = 0
    cont2 = 0
    expressao = list(input())
    for i in expressao:
        if i == '(':
            cont1 += 1
        elif i == ')':
            cont2 += 1
        elif cont2 > cont1:
            print("incorrect\n")
            break
    if cont1 == cont2:
        print("correct\n")
    elif cont1 > cont2:
        print("incorrect\n")