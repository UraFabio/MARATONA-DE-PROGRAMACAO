#include <stdio.h>
#include <string.h>
#define MAX 1001

int main(){
	char vetor[MAX] = {'a'};
	int contador1, contador2, tamanho;
	
	while(vetor != 0){

		contador1 = 0;
		contador2 = 0;
		
		
		fgets(vetor, sizeof(vetor), stdin);
		if(!strcmp(vetor, "\n")){
			break;
		}
		//printf("%s", vetor);
		
		tamanho = strlen(vetor);
		
		for (int a = 0; a < tamanho; a ++){
			if (vetor[a] == '('){
				contador1 ++;
			}else if (vetor[a] == ')'){
				contador2 ++;
			}
			if (contador2 > contador1){
				printf("incorrect\n");
				break;
			}
		}
		if (contador1 == contador2){
			printf("correct\n");
			
		}else if( contador1 > contador2){
			printf("incorrect\n");
		}
	}
	return 0;
}

