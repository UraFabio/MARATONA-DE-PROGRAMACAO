#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1001

int main(){
	int quantidade, a, b,  tamanho, metade;
	char linha[MAX],nova_linha[MAX], letra;
	
	scanf("%d", &quantidade);
	
	for (b = 0; b < quantidade; b ++){
		
		fflush(stdin);
		//gets(linha);
		//fgets(linha, MAX, stdin);
		scanf("%[^\n]s\n", linha);
		
		tamanho = strlen(linha);
		
		for (a = 0; a < tamanho; a ++){
			if (isalpha(linha[a])){
				linha[a] += 3;
			}
		}
		for (a = 0; a < tamanho; a ++){
				nova_linha[a] = linha[tamanho-a-1];
		}
		nova_linha[tamanho] = '\0';
		
		metade = tamanho/2;
		for (a = metade; a < tamanho; a ++){
			nova_linha[a]--;
		}
		
		printf("%s\n", nova_linha);
			
	}

	return 0;
}

