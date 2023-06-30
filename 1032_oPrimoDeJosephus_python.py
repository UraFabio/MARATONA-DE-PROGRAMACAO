def eh_primo(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def proximo_primo(n):
    i = n + 1
    while not eh_primo(i):
        i += 1
    return i

while True:
    n = int(input())
    if n == 0:
        break
    pessoas = list(range(1, n+1))  
    pos = 0
    primo = 2
    while len(pessoas) > 1:
        pos = (pos + primo - 1) % len(pessoas)
        pessoas.pop(pos)
        primo = proximo_primo(primo)
    print(pessoas[0])
