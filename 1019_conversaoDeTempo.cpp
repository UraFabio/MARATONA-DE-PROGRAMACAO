#include <stdio.h>

int main(){
	int valor, horas, minutos, segundos;
	scanf("%d", &valor);
	horas = valor/3600;
	valor = valor - horas*3600;
	minutos = valor/60;
	valor = valor - minutos*60;
	segundos = valor;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	return 0;
}

