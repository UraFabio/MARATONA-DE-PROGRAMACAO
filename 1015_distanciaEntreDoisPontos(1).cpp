#include <stdio.h>
#include <math.h>

int main(){
	float x1, y1, x2, y2, distancia;
	
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2 );
	
	distancia = pow(pow(x2-x1,2)+pow(y2-y1,2), 0.5);
	
	printf("%0.4f", distancia);
	
	return 0;
}

