amount_testcases = int(input())
alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for amount in range(amount_testcases):
    soma = 0
    testcases = int(input())
    for testcase in range(testcases):
        L = input()
        a = 0
        for letra in L:
            soma +=  alfabeto.index(letra) + testcase + a
            a += 1
    print(f"{soma}")
