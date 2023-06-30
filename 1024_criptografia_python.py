casos = int(input())

for caso in range(casos):
    teste = list(input(">> "))
    tamanho = len(teste)
    print(teste)
    for indice in range(tamanho):
        print(teste[indice].isalpha())
        if teste[indice].isalpha():
            teste[indice] = chr(ord(teste[indice])+ 3)
    print(teste)
    teste = teste[::-1]
    print(teste)
    metade = tamanho//2
    a = metade
    while metade < tamanho:
        teste[metade] = chr(ord(teste[metade])- 1)
        metade += 1
    
    print(''.join(teste))
    

