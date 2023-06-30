def bintodec(b):
    n = 0
    c = 0
    for i in b[::-1]:   
        n += int(i)*(2**c)
        c += 1
    return n
"""
memoria = {}

def fibo(n):
    if n in memoria:
        return memoria[n]
    else:
        if n == 1 or n == 2:
            x =1
        else:
            x = fibo(n-1) + fibo(n-2)
        memoria[n] = x
        return x        
        """

memoria = {}
def fibo(n):
    if n in memoria:
        return memoria[n]
    else:
        if n == 1 or n == 2:
            memoria[n] = 1
            return 1

        else:
            n1, n2 = 1, 1
            for i in range(n-2):
                n3 = n1 + n2
                n1 = n2
                n2 = n3
            memoria[n] = n3
            return n3
        
        
instancia = int(input(""))

for i in range(instancia):
    fileira = input("")
    print(f"{fibo(bintodec(fileira))%1000:0>3}")