#include <stdio.h>

int main(){
	int casos, c;
	float comida;
	
	scanf("%d", &casos);
	
	for(int i = 0; i < casos; i ++){
		c = 0;
		scanf("%f", &comida);
		while(comida > 1){
			comida /= 2;
			c ++;
		}
		printf("%d dias\n", c);
	}

	return 0;
}

