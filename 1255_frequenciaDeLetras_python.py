numero_de_casos = int(input())
alfabeto = "abcdefghijklmnopqrstuvwxyz"

for caso in range(numero_de_casos):
    texto = input().lower()

    frequencia = [0]*26
    for letra in texto:
        if letra in alfabeto:
            indice = alfabeto.index(letra)
            frequencia[indice] += 1
        
    maximo = max(frequencia)

    resultado = []
    for i in frequencia:
        if i == maximo:
            indice = frequencia.index(i)
            resultado.append(alfabeto[indice])
            frequencia[indice] = 0
    print(''.join(resultado))
