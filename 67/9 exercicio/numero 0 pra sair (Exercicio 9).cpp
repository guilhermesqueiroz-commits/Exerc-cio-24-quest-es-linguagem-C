#include <stdio.h>


int main(){
	int numero;
	
	
	printf("Digite um numero(0 pra sair) :");
	scanf("%d", &numero);
	
	while (numero !=0) {
		printf("Voce digitou. %d\n", numero);
	    printf("Digite um numero(0 pra sair)");
	    scanf("%d", &numero);
	}
	printf("Progama encerrado !!!\n");
	
	return 0;
}

