#include <stdio.h>
#include <math.h>

int bintodec(long long int n){
	int dec = 0, a = 0;
	
	while(n != 0){
		dec += (n%10)*pow(2, a);
		n /= 10;
		a ++;
	}
	return dec;
}

/*int vetor[10000];

int fibo(int n){
	int x;
	if(vetor[n]){
		return vetor[n];
	}else{
		if(n == 1 || n == 2){
			x = 1;
		}else{
			x = fibo(n-1) + fibo(n-2);
		}
		vetor[n] = x;
		return x;
	}
}
*/

int fibo(int n){
	if(n <= 2){
		return 1;
	}else{
		int n1 = 1, n2 = 1, n3;
		for(int i = 0; i < n-2; i ++){
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		return n3;
		
	}
}

int main(){
	long long int fileira;
	int instancia;
	
	scanf("%d", &instancia);
	
	for(int i = 0; i < instancia; i ++){
		scanf("%lld", &fileira);
		printf("%03d\n", fibo(bintodec(fileira))%1000);
		
	}
	
	
	return 0;
}

