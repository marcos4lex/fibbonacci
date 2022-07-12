#include <stdio.h>

void logica();

int main(){
	
	logica();
	
	return 0;
}

void logica(){
	int f1=0, f2=1, fx=0, n;
	
	printf("informe o numero a ser procurado: ");
	scanf("%d", &n);
	
	if (n < 0){
		printf("por favor, digite um numero valido!");
	}
	
				
	while (f2 < n) {
		fx = f1 + f2;
		printf("%d ", fx);
		f1 = f2;
		f2 = fx;
	}
	
	if (fx == n){
		printf("\nO numero %d PERTENCE a sequencia fibbonacci!", n);
	} else {
		printf("\nO numero %d NAO PERTENCE a sequencia fibbonacci!", n);
	}
}
